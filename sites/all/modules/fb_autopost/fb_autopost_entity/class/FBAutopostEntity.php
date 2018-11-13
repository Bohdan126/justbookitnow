<?php

/**
 * @file
 * Handles the Entity publication.
 */

/**
 * Handles publishing using a Facebook publication entity.
 */
class FBAutopostEntity extends FBAutopost {
  /**
   * Publishes content stored in a Facebook publication entity
   *
   * @param FacebookPublicationEntity $publication
   *   The fully loaded Facebook publication entity.
   * @param string $page_id
   *   Page id (among those already selected via UI).
   *   If this is present it will override the parameter destination.
   *   Use 'me' to publish to the user's timeline
   *
   * @return string
   *   Facebook id string for the publication. Needed to edit, or delete the
   *   publication.
   *
   * @throws FBAutopostException
   * @see FBAutopost::publish()
   */
  public function publishEntity(FacebookPublicationEntity $publication, string $page_id = NULL) {
    // Invoke FBAutopost::publish() with the parameters from $publication.
    return parent::publish(array(
      'type' => $publication->type,
      'params' => fb_autopost_entity_get_properties($publication),
      // We need to control serialization to handle class loading
      'entity' => serialize($publication),
    ), $page_id);
  }

  /**
   * Deletes a publication from facebook stored in an entity.
   *
   * @param FacebookPublicationEntity $publication
   *   The fully loaded Facebook publication entity.
   *
   * @return boolean
   *   TRUE if the publication was deleted successfully.
   *
   * @throws FBAutopostException
   * @see FBAutopost::remoteDelete()
   */
  public function remoteEntityDelete(FacebookPublicationEntity $publication_entity) {
    // Get a wrapper for the entity and extract the remote ID
    $wrapper = entity_metadata_wrapper('facebook_publication', $publication_entity);
    $remote_id = $wrapper->facebook_id->value();

    // Get a publication Array
    $publication = array(
      'type' => $publication_entity->type,
      'params' => fb_autopost_entity_get_properties($publication_entity),
    );
    // Call prepare because we need the access token
    $this->publishParameterPrepare($publication);
    $token = (array_key_exists('access_token', $publication['params'])) ? $publication['params']['access_token'] : '';

    // If there is a remote ID and an access token, then delete the
    // associated publication.
    if (!empty($remote_id) && !empty($token)) {
      return parent::remoteDelete($remote_id, $token);
    }
    else {
      if (empty($remote_id)) {
        throw new FBAutopostException(t('Remote ID could not be found.'), FBAutopost::missing_param, WATCHDOG_ERROR);
      }
      if (empty($token)) {
        throw new FBAutopostException(t('Access token could not be found.'), FBAutopost::missing_param, WATCHDOG_ERROR);
      }
    }
  }

  /**
   * Edits a publication in facebook from a stored entity.
   *
   * @param FacebookPublicationEntity $publication
   *   The fully loaded Facebook publication entity
   *
   * @throws FBAutopostException
   * @see FBAutopost::remoteEdit()
   */
  public function remoteEntityEdit(FacebookPublicationEntity $publication) {
    // In this case, edit means delete + publish. This has the side effect that
    // the ID is not preserved.
    if ($this->remoteEntityDelete($publication)) {
      return $this->publishEntity($publication);
    }
  }
}
