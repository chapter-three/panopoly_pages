<?php
/**
 * @file
 * panopoly_pages.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function panopoly_pages_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|panopoly_page|featured';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'panopoly_page';
  $ds_layout->view_mode = 'featured';
  $ds_layout->layout = 'phelan';
  $ds_layout->settings = array(
    'css_id' => '',
    'class' => '',
    'sticky' => 0,
    'layout' => 'phelan',
    'hide_sidebars' => 0,
    'pipeline' => 'standard',
    'hide_empty_regions' => FALSE,
    'ds_panels' => TRUE,
    'did' => variable_get('panopoly_pages_ds_featured'),
    'theme' => 'phelan',
  );
  $export['node|panopoly_page|featured'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|panopoly_page|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'panopoly_page';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'boxton';
  $ds_layout->settings = array(
    'css_id' => '',
    'class' => '',
    'sticky' => 0,
    'layout' => 'boxton',
    'hide_sidebars' => 0,
    'pipeline' => 'standard',
    'hide_empty_regions' => FALSE,
    'ds_panels' => TRUE,
    'did' => variable_get('panopoly_pages_ds_teaser'),
    'theme' => 'boxton',
  );
  $export['node|panopoly_page|teaser'] = $ds_layout;

  return $export;
}
