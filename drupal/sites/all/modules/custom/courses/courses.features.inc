<?php
/**
 * @file
 * courses.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function courses_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function courses_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function courses_node_info() {
  $items = array(
    'class' => array(
      'name' => t('Class'),
      'base' => 'node_content',
      'description' => t('Use this type to describe a single meeting of a course.  Each Class should be linked to a Course page, and it should have its own date.  You can embed a YouTube recording of the class and a link to the event on meetup.com.  A teaser version of the class page will be listed on the corresponding Course page, along with the other meetings of the course, and the full version will appear on its own page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'course' => array(
      'name' => t('Course'),
      'base' => 'node_content',
      'description' => t('Create one Course node for each series of classes.  This will provide the home page for the class, where you can describe the prerequisites, goals, and so on.  For each course, you will create several Class nodes, one for each meeting.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'speaker' => array(
      'name' => t('Speaker'),
      'base' => 'node_content',
      'description' => t('Create a node of this content type for each of our speakers.  Once this node has been created, you can reference it from the class at which the speaker will present.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'sponsor' => array(
      'name' => t('Sponsor'),
      'base' => 'node_content',
      'description' => t('When a company sponsors one of our meetups, create a page for the sponsor here.  Normally, you will want to link to the sponsor\'s page from both classes that take place at that meetup.'),
      'has_title' => '1',
      'title_label' => t('Company name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
