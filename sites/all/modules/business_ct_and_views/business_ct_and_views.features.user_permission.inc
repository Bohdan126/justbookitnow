<?php
/**
 * @file
 * business_ct_and_views.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function business_ct_and_views_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'schedule (un)publishing of nodes'.
  $permissions['schedule (un)publishing of nodes'] = array(
    'name' => 'schedule (un)publishing of nodes',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'scheduler',
  );

  return $permissions;
}
