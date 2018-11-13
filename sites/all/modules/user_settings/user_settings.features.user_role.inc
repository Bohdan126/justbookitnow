<?php
/**
 * @file
 * user_settings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function user_settings_user_default_roles() {
  $roles = array();

  // Exported role: customer.
  $roles['customer'] = array(
    'name' => 'customer',
    'weight' => 3,
  );

  return $roles;
}
