<?php
/**
 * @file
 * courses.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function courses_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'class_list';
  $view->description = 'List of classes for a Course page';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Class list';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Meetings of this course';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_recording' => 'field_recording',
    'title' => 'title',
    'field_meeting_time' => 'title',
    'field_meetup_link' => 'field_meetup_link',
    'field_home_page' => 'field_home_page',
    'title_1' => 'title_1',
    'field_home_page_1' => 'field_home_page_1',
    'title_2' => 'title_2',
    'field_logo' => 'field_logo',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_recording' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '<br>',
      'empty_column' => 0,
    ),
    'field_meeting_time' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_meetup_link' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_home_page' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_home_page_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title_2' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_logo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_course_target_id']['id'] = 'field_course_target_id';
  $handler->display->display_options['relationships']['field_course_target_id']['table'] = 'field_data_field_course';
  $handler->display->display_options['relationships']['field_course_target_id']['field'] = 'field_course_target_id';
  $handler->display->display_options['relationships']['field_course_target_id']['label'] = 'Course';
  $handler->display->display_options['relationships']['field_course_target_id']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_sponsor_target_id']['id'] = 'field_sponsor_target_id';
  $handler->display->display_options['relationships']['field_sponsor_target_id']['table'] = 'field_data_field_sponsor';
  $handler->display->display_options['relationships']['field_sponsor_target_id']['field'] = 'field_sponsor_target_id';
  $handler->display->display_options['relationships']['field_sponsor_target_id']['label'] = 'Sponsor';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_speaker_target_id']['id'] = 'field_speaker_target_id';
  $handler->display->display_options['relationships']['field_speaker_target_id']['table'] = 'field_data_field_speaker';
  $handler->display->display_options['relationships']['field_speaker_target_id']['field'] = 'field_speaker_target_id';
  $handler->display->display_options['relationships']['field_speaker_target_id']['label'] = 'Speaker';
  /* Field: Content: Recording */
  $handler->display->display_options['fields']['field_recording']['id'] = 'field_recording';
  $handler->display->display_options['fields']['field_recording']['table'] = 'field_data_field_recording';
  $handler->display->display_options['fields']['field_recording']['field'] = 'field_recording';
  $handler->display->display_options['fields']['field_recording']['label'] = '';
  $handler->display->display_options['fields']['field_recording']['element_type'] = '0';
  $handler->display->display_options['fields']['field_recording']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_recording']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_recording']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_recording']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_recording']['type'] = 'file_rendered';
  $handler->display->display_options['fields']['field_recording']['settings'] = array(
    'file_view_mode' => 'preview',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Title and Date';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Meeting time */
  $handler->display->display_options['fields']['field_meeting_time']['id'] = 'field_meeting_time';
  $handler->display->display_options['fields']['field_meeting_time']['table'] = 'field_data_field_meeting_time';
  $handler->display->display_options['fields']['field_meeting_time']['field'] = 'field_meeting_time';
  $handler->display->display_options['fields']['field_meeting_time']['label'] = '';
  $handler->display->display_options['fields']['field_meeting_time']['element_type'] = '0';
  $handler->display->display_options['fields']['field_meeting_time']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_time']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_meeting_time']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_meeting_time']['settings'] = array(
    'format_type' => 'date_and_time',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Meetup link */
  $handler->display->display_options['fields']['field_meetup_link']['id'] = 'field_meetup_link';
  $handler->display->display_options['fields']['field_meetup_link']['table'] = 'field_data_field_meetup_link';
  $handler->display->display_options['fields']['field_meetup_link']['field'] = 'field_meetup_link';
  $handler->display->display_options['fields']['field_meetup_link']['click_sort_column'] = 'url';
  /* Field: Content: Home page */
  $handler->display->display_options['fields']['field_home_page']['id'] = 'field_home_page';
  $handler->display->display_options['fields']['field_home_page']['table'] = 'field_data_field_home_page';
  $handler->display->display_options['fields']['field_home_page']['field'] = 'field_home_page';
  $handler->display->display_options['fields']['field_home_page']['relationship'] = 'field_speaker_target_id';
  $handler->display->display_options['fields']['field_home_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_home_page']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_home_page']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_speaker_target_id';
  $handler->display->display_options['fields']['title_1']['label'] = 'Speaker';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = '[field_home_page]';
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title_1']['empty'] = 'TBA';
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = FALSE;
  /* Field: Content: Home page */
  $handler->display->display_options['fields']['field_home_page_1']['id'] = 'field_home_page_1';
  $handler->display->display_options['fields']['field_home_page_1']['table'] = 'field_data_field_home_page';
  $handler->display->display_options['fields']['field_home_page_1']['field'] = 'field_home_page';
  $handler->display->display_options['fields']['field_home_page_1']['relationship'] = 'field_sponsor_target_id';
  $handler->display->display_options['fields']['field_home_page_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_home_page_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_home_page_1']['type'] = 'link_plain';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_2']['id'] = 'title_2';
  $handler->display->display_options['fields']['title_2']['table'] = 'node';
  $handler->display->display_options['fields']['title_2']['field'] = 'title';
  $handler->display->display_options['fields']['title_2']['relationship'] = 'field_sponsor_target_id';
  $handler->display->display_options['fields']['title_2']['exclude'] = TRUE;
  /* Field: Content: Logo */
  $handler->display->display_options['fields']['field_logo']['id'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['table'] = 'field_data_field_logo';
  $handler->display->display_options['fields']['field_logo']['field'] = 'field_logo';
  $handler->display->display_options['fields']['field_logo']['relationship'] = 'field_sponsor_target_id';
  $handler->display->display_options['fields']['field_logo']['label'] = 'Sponsor';
  $handler->display->display_options['fields']['field_logo']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_logo']['alter']['path'] = '[field_home_page_1]';
  $handler->display->display_options['fields']['field_logo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['empty'] = '[title_2]';
  $handler->display->display_options['fields']['field_logo']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_logo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_logo']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_course_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
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
    'class' => 'class',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['class_list'] = $view;

  return $export;
}
