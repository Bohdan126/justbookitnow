<?php

/**
 * @file
 * Class implementation for FBAutopostEntityPost
 */

/**
 * Special case for FacebookPublicationType Post
 */
class FBAutopostEntityPost extends FBAutopostEntity {
  /**
   * Prepares the parameters to publish to Facebook, this means settings any
   * field or destination dependent configuration.
   */
  protected function publishParameterPrepare(&$publication) {
    parent::publishParameterPrepare($publication);
    /* actions are deprecated since July 2015
    // It is mandatory to have action links for posts. Provide them if empty.
    $name = t('Visit');
    $link = empty($publication['params']['link']) ? $GLOBALS['base_url'] : $publication['params']['link'];
    // Actions is encoded in drupal as name|link. This should be prepared as an
    // array.
    if (!empty($publication['params']['actions'])) {
      list($name, $link) = explode('|', $publication['params']['actions']);
    }
    $publication['params']['actions'] = array(
      'name' => $name,
      'link' => $link,
    );*/
  }

  /**
   * Edits a publication in facebook from a stored entity. Posts in Facebook
   * can actually be updated, this means that there is no deletion needed.
   *
   * @param FacebookPublicationEntity $publication
   *   The fully loaded Facebook publication entity
   *
   * @throws FBAutopostException
   * @see FBAutopost::remoteEdit()
   */
  public function remoteEntityEdit(FacebookPublicationEntity $publication_entity) {
    // For a post we should update the Entity, instead of deleting an
    // recreating it.
    $wrapper = entity_metadata_wrapper('facebook_publication', $publication_entity);
    $remote_id = $wrapper->facebook_id->value();
    $publication = array(
      'type' => $publication_entity->type,
      'params' => fb_autopost_entity_get_properties($publication_entity),
    );
    $this->publishParameterPrepare($publication);

    // Call api method from ancestor.
    $result = $this->post($remote_id, $publication['params'],$publication['params']['access_token']);
    // return the same id since we updated it
    return array('id' => $remote_id);
  }
}

