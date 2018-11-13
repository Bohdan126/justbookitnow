<?php
/**
 * @file
 * business_ct_and_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function business_ct_and_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'business_detail_header';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Business Detail Header';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address (for display to customers) */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  /* Field: Content: Enter your event address for a map location */
  $handler->display->display_options['fields']['field_coordinates']['id'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['table'] = 'field_data_field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['field'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['label'] = '';
  $handler->display->display_options['fields']['field_coordinates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coordinates']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_coordinates']['type'] = 'geofield_leaflet';
  $handler->display->display_options['fields']['field_coordinates']['settings'] = array(
    'leaflet_map' => 'google-roadmap',
    'height' => '300',
    'popup' => array(
      'show' => 0,
      'text' => '',
    ),
    'zoom' => array(
      'initialZoom' => '14',
      'minZoom' => '-1',
      'maxZoom' => '-1',
    ),
    'icon' => array(
      'iconType' => 'marker',
      'iconUrl' => '',
      'shadowUrl' => '',
      'html' => '',
      'iconImageStyle' => '',
      'htmlClass' => 'fa fa-phone',
      'iconSize' => array(
        'x' => '',
        'y' => '',
      ),
      'iconAnchor' => array(
        'x' => '',
        'y' => '',
      ),
      'shadowAnchor' => array(
        'x' => '',
        'y' => '',
      ),
      'popupAnchor' => array(
        'x' => '',
        'y' => '',
      ),
    ),
    'vector_display' => array(
      'stroke_override' => 0,
      'stroke' => 0,
      'color' => '',
      'weight' => '',
      'opacity' => '',
      'dashArray' => '',
      'fill' => 0,
      'fillColor' => '',
      'fillOpacity' => '',
      'clickable' => 0,
    ),
  );
  /* Field: Content: Photo Banner */
  $handler->display->display_options['fields']['field_photo_banner']['id'] = 'field_photo_banner';
  $handler->display->display_options['fields']['field_photo_banner']['table'] = 'field_data_field_photo_banner';
  $handler->display->display_options['fields']['field_photo_banner']['field'] = 'field_photo_banner';
  $handler->display->display_options['fields']['field_photo_banner']['label'] = '';
  $handler->display->display_options['fields']['field_photo_banner']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_photo_banner']['alter']['text'] = '<div class="business-detail-header">
  <div class="field-photo">[field_photo_banner]</div>
  <div class="business-detail-header-text"><div class="business-detail-header-text-inner">
    <div class="container"><div class="row">
      <div class="col-md-8">
        <div class="field-title">[title]</div>
        <div class="field-address"><span class="glyphicon glyphicon-home"></span>[field_address]</div>
        <div class="field-phone"><span class="glyphicon glyphicon-phone-alt"></span>[field_phone]</div>
        <div class="field-website"><span class="glyphicon glyphicon-globe"></span>[field_website]</div>
      </div>
      <div class="field-map col-md-4">[field_coordinates]</div>
    </div></div>
  </div></div>
</div>';
  $handler->display->display_options['fields']['field_photo_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_banner']['empty'] = '<div class="business-detail-header">
  <div class="business-detail-header-text"><div class="business-detail-header-text-inner">
    <div class="container"><div class="row">
      <div class="col-md-8">
        <div class="field-title">[title]</div>
        <div class="field-address"><span class="glyphicon glyphicon-home"></span>[field_address]</div>
        <div class="field-phone"><span class="glyphicon glyphicon-phone-alt"></span>[field_phone]</div>
        <div class="field-website"><span class="glyphicon glyphicon-globe"></span>[field_website]</div>
      </div>
      <div class="field-map col-md-4">[field_coordinates]</div>
    </div></div>
  </div></div>
</div>';
  $handler->display->display_options['fields']['field_photo_banner']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_photo_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_banner']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="business-detail-review">
    <div class="container"><div class="row">
      <div class="col-md-8">
        <div class="field-write-comment"><a href="#comments" class="btn btn-primary">Write a comment</a></div>
      </div>
    </div></div>
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '#comments';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['nid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['nid']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['nid']['validate_options']['types'] = array(
    'business' => 'business',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business' => 'business',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address (for display to customers) */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['exclude'] = TRUE;
  /* Field: Content: Open or Event date and time */
  $handler->display->display_options['fields']['field_open_time']['id'] = 'field_open_time';
  $handler->display->display_options['fields']['field_open_time']['table'] = 'field_data_field_open_time';
  $handler->display->display_options['fields']['field_open_time']['field'] = 'field_open_time';
  $handler->display->display_options['fields']['field_open_time']['label'] = '';
  $handler->display->display_options['fields']['field_open_time']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_open_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_time']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['label'] = '';
  $handler->display->display_options['fields']['field_phone']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_phone']['element_label_colon'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['label'] = '';
  $handler->display->display_options['fields']['field_website']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_website']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  /* Field: Content: Enter your event address for a map location */
  $handler->display->display_options['fields']['field_coordinates']['id'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['table'] = 'field_data_field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['field'] = 'field_coordinates';
  $handler->display->display_options['fields']['field_coordinates']['label'] = '';
  $handler->display->display_options['fields']['field_coordinates']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_coordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_coordinates']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_coordinates']['type'] = 'geofield_leaflet';
  $handler->display->display_options['fields']['field_coordinates']['settings'] = array(
    'leaflet_map' => 'google-roadmap',
    'height' => '300',
    'popup' => array(
      'show' => 0,
      'text' => '',
    ),
    'zoom' => array(
      'initialZoom' => '14',
      'minZoom' => '-1',
      'maxZoom' => '-1',
    ),
    'icon' => array(
      'iconType' => 'marker',
      'iconUrl' => '',
      'shadowUrl' => '',
      'html' => '',
      'iconImageStyle' => '',
      'htmlClass' => 'fa fa-phone',
      'iconSize' => array(
        'x' => '',
        'y' => '',
      ),
      'iconAnchor' => array(
        'x' => '',
        'y' => '',
      ),
      'shadowAnchor' => array(
        'x' => '',
        'y' => '',
      ),
      'popupAnchor' => array(
        'x' => '',
        'y' => '',
      ),
    ),
    'vector_display' => array(
      'stroke_override' => 0,
      'stroke' => 0,
      'color' => '',
      'weight' => '',
      'opacity' => '',
      'dashArray' => '',
      'fill' => 0,
      'fillColor' => '',
      'fillOpacity' => '',
      'clickable' => 0,
    ),
  );
  /* Field: Content: Photo Banner */
  $handler->display->display_options['fields']['field_photo_banner']['id'] = 'field_photo_banner';
  $handler->display->display_options['fields']['field_photo_banner']['table'] = 'field_data_field_photo_banner';
  $handler->display->display_options['fields']['field_photo_banner']['field'] = 'field_photo_banner';
  $handler->display->display_options['fields']['field_photo_banner']['label'] = '';
  $handler->display->display_options['fields']['field_photo_banner']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_photo_banner']['alter']['text'] = '<div class="business-detail-header">
  <div class="field-photo">[field_photo_banner]</div>
  <div class="business-detail-header-text"><div class="business-detail-header-text-inner">
    <div class="container"><div class="row">
      <div class="col-md-8">
        <div class="field-title">[title]</div>
        <div class="field-address"><span class="glyphicon glyphicon-home"></span>[field_address]</div>
        <div class="field-open-time"><span class="glyphicon glyphicon glyphicon-time"></span>[field_open_time]</div>
      </div>
      <div class="field-map col-md-4">[field_coordinates]</div>
    </div></div>
  </div></div>
</div>';
  $handler->display->display_options['fields']['field_photo_banner']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo_banner']['empty'] = '<div class="business-detail-header">
  <div class="business-detail-header-text"><div class="business-detail-header-text-inner">
    <div class="container"><div class="row">
      <div class="col-md-8">
        <div class="field-title">[title]</div>
        <div class="field-address"><span class="glyphicon glyphicon-home"></span>[field_address]</div>
        <div class="field-open-time"><span class="glyphicon glyphicon glyphicon-time"></span>[field_open_time]</div>
      </div>
      <div class="field-map col-md-4">[field_coordinates]</div>
    </div></div>
  </div></div>
</div>';
  $handler->display->display_options['fields']['field_photo_banner']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_photo_banner']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo_banner']['settings'] = array(
    'image_style' => 'photo_banner',
    'image_link' => '',
  );
  /* Field: Content: Ticket link */
  $handler->display->display_options['fields']['field_ticket_link']['id'] = 'field_ticket_link';
  $handler->display->display_options['fields']['field_ticket_link']['table'] = 'field_data_field_ticket_link';
  $handler->display->display_options['fields']['field_ticket_link']['field'] = 'field_ticket_link';
  $handler->display->display_options['fields']['field_ticket_link']['label'] = '';
  $handler->display->display_options['fields']['field_ticket_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ticket_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ticket_link']['alter']['text'] = '<a href="[field_ticket_link-url]" target="_blank">JUST BOOK IT NOW</a>';
  $handler->display->display_options['fields']['field_ticket_link']['element_class'] = 'btn btn-primary';
  $handler->display->display_options['fields']['field_ticket_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ticket_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ticket_link']['type'] = 'link_title_plain';
  /* Field: Content: Ticket link */
  $handler->display->display_options['fields']['field_ticket_link_1']['id'] = 'field_ticket_link_1';
  $handler->display->display_options['fields']['field_ticket_link_1']['table'] = 'field_data_field_ticket_link';
  $handler->display->display_options['fields']['field_ticket_link_1']['field'] = 'field_ticket_link';
  $handler->display->display_options['fields']['field_ticket_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_ticket_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_ticket_link_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ticket_link_1']['alter']['text'] = '<a href="[field_ticket_link_1]" target="_blank" class="btn btn-primary">[field_ticket_link_1-title]</a>';
  $handler->display->display_options['fields']['field_ticket_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ticket_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_ticket_link_1']['type'] = 'link_absolute';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<div class="business-detail-review">
    <div class="container"><div class="row">
      <div class="col-md-8">
        <div class="field-write-comment"><a href="#comments" class="btn btn-primary">Write a comment</a>[field_ticket_link_1]</div>
      </div>
    </div></div>
</div>';
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '#comments';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['block_description'] = 'Business Detail - Header';

  /* Display: Node info */
  $handler = $view->new_display('block', 'Node info', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Details';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Open or Event date and time */
  $handler->display->display_options['fields']['field_open_time']['id'] = 'field_open_time';
  $handler->display->display_options['fields']['field_open_time']['table'] = 'field_data_field_open_time';
  $handler->display->display_options['fields']['field_open_time']['field'] = 'field_open_time';
  $handler->display->display_options['fields']['field_open_time']['label'] = '';
  $handler->display->display_options['fields']['field_open_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_open_time']['type'] = 'addtocal_view';
  $handler->display->display_options['fields']['field_open_time']['settings'] = array(
    'location' => array(
      'field' => 'tokenize output',
      'tokenized' => '[node:field_address]',
    ),
    'description' => array(
      'field' => 'tokenize output',
      'tokenized' => '[node:body]',
    ),
    'past_events' => 0,
    'view_mode' => '_custom',
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Ticket link */
  $handler->display->display_options['fields']['field_ticket_link']['id'] = 'field_ticket_link';
  $handler->display->display_options['fields']['field_ticket_link']['table'] = 'field_data_field_ticket_link';
  $handler->display->display_options['fields']['field_ticket_link']['field'] = 'field_ticket_link';
  $handler->display->display_options['fields']['field_ticket_link']['label'] = '';
  $handler->display->display_options['fields']['field_ticket_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_ticket_link']['alter']['text'] = '<a href="[field_ticket_link-url]" target="_blank">[field_ticket_link-title]</a>';
  $handler->display->display_options['fields']['field_ticket_link']['element_class'] = 'buy-tickets-style';
  $handler->display->display_options['fields']['field_ticket_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ticket_link']['click_sort_column'] = 'url';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $translatables['business_detail_header'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Address (for display to customers)'),
    t('<div class="business-detail-header">
  <div class="field-photo">[field_photo_banner]</div>
  <div class="business-detail-header-text"><div class="business-detail-header-text-inner">
    <div class="container"><div class="row">
      <div class="col-md-8">
        <div class="field-title">[title]</div>
        <div class="field-address"><span class="glyphicon glyphicon-home"></span>[field_address]</div>
        <div class="field-phone"><span class="glyphicon glyphicon-phone-alt"></span>[field_phone]</div>
        <div class="field-website"><span class="glyphicon glyphicon-globe"></span>[field_website]</div>
      </div>
      <div class="field-map col-md-4">[field_coordinates]</div>
    </div></div>
  </div></div>
</div>'),
    t('<div class="business-detail-header">
  <div class="business-detail-header-text"><div class="business-detail-header-text-inner">
    <div class="container"><div class="row">
      <div class="col-md-8">
        <div class="field-title">[title]</div>
        <div class="field-address"><span class="glyphicon glyphicon-home"></span>[field_address]</div>
        <div class="field-phone"><span class="glyphicon glyphicon-phone-alt"></span>[field_phone]</div>
        <div class="field-website"><span class="glyphicon glyphicon-globe"></span>[field_website]</div>
      </div>
      <div class="field-map col-md-4">[field_coordinates]</div>
    </div></div>
  </div></div>
</div>'),
    t('<div class="business-detail-review">
    <div class="container"><div class="row">
      <div class="col-md-8">
        <div class="field-write-comment"><a href="#comments" class="btn btn-primary">Write a comment</a></div>
      </div>
    </div></div>
</div>'),
    t('All'),
    t('Block'),
    t('<div class="business-detail-header">
  <div class="field-photo">[field_photo_banner]</div>
  <div class="business-detail-header-text"><div class="business-detail-header-text-inner">
    <div class="container"><div class="row">
      <div class="col-md-8">
        <div class="field-title">[title]</div>
        <div class="field-address"><span class="glyphicon glyphicon-home"></span>[field_address]</div>
        <div class="field-open-time"><span class="glyphicon glyphicon glyphicon-time"></span>[field_open_time]</div>
      </div>
      <div class="field-map col-md-4">[field_coordinates]</div>
    </div></div>
  </div></div>
</div>'),
    t('<div class="business-detail-header">
  <div class="business-detail-header-text"><div class="business-detail-header-text-inner">
    <div class="container"><div class="row">
      <div class="col-md-8">
        <div class="field-title">[title]</div>
        <div class="field-address"><span class="glyphicon glyphicon-home"></span>[field_address]</div>
        <div class="field-open-time"><span class="glyphicon glyphicon glyphicon-time"></span>[field_open_time]</div>
      </div>
      <div class="field-map col-md-4">[field_coordinates]</div>
    </div></div>
  </div></div>
</div>'),
    t('<a href="[field_ticket_link-url]" target="_blank">JUST BOOK IT NOW</a>'),
    t('<a href="[field_ticket_link_1]" target="_blank" class="btn btn-primary">[field_ticket_link_1-title]</a>'),
    t('<div class="business-detail-review">
    <div class="container"><div class="row">
      <div class="col-md-8">
        <div class="field-write-comment"><a href="#comments" class="btn btn-primary">Write a comment</a>[field_ticket_link_1]</div>
      </div>
    </div></div>
</div>'),
    t('Business Detail - Header'),
    t('Node info'),
    t('Details'),
    t('<a href="[field_ticket_link-url]" target="_blank">[field_ticket_link-title]</a>'),
  );
  $export['business_detail_header'] = $view;

  return $export;
}
