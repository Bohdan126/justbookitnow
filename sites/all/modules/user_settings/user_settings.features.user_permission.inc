<?php
/**
 * @file
 * user_settings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function user_settings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'use hybridauth'.
  $permissions['use hybridauth'] = array(
    'name' => 'use hybridauth',
    'roles' => array(
      'Business or Event' => 'Business or Event',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'hybridauth',
  );

  return $permissions;
}
