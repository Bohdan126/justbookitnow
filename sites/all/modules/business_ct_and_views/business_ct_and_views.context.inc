<?php
/**
 * @file
 * business_ct_and_views.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function business_ct_and_views_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'business-detail';
  $context->description = 'Layout of Business node detail';
  $context->tag = 'business';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'business' => 'business',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-1' => array(
          'module' => 'block',
          'delta' => '1',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
        'views-business_detail_header-block_1' => array(
          'module' => 'views',
          'delta' => 'business_detail_header-block_1',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-list_business-block_1' => array(
          'module' => 'views',
          'delta' => 'list_business-block_1',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'justbook_main-organiser_profile' => array(
          'module' => 'justbook_main',
          'delta' => 'organiser_profile',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
        'authorcontact-0' => array(
          'module' => 'authorcontact',
          'delta' => '0',
          'region' => 'sidebar_second',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Layout of Business node detail');
  t('business');
  $export['business-detail'] = $context;

  return $export;
}
