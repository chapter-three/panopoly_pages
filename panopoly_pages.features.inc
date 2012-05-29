<?php
/**
 * @file
 * panopoly_pages.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function panopoly_pages_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function panopoly_pages_node_info() {
  $items = array(
    'panopoly_page' => array(
      'name' => t('Basic Page'),
      'base' => 'node_content',
      'description' => t('An important page to display to users on your site.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
