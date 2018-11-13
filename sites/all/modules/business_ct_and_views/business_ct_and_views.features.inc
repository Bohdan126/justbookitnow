<?php
/**
 * @file
 * business_ct_and_views.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function business_ct_and_views_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function business_ct_and_views_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function business_ct_and_views_image_default_styles() {
  $styles = array();

  // Exported image style: photo_banner.
  $styles['photo_banner'] = array(
    'label' => 'Photo banner',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 450,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function business_ct_and_views_node_info() {
  $items = array(
    'business' => array(
      'name' => t('Business or event'),
      'base' => 'node_content',
      'description' => t('Use <i>business or event</i> to add details of a business, venue or event to the directory'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
