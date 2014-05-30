<?php
/**
 * @file
 * visualization_entity_multi_choropleth_bundle.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function visualization_entity_multi_choropleth_bundle_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_visualizations'
  $field_bases['field_visualizations'] = array(
    'active' => 1,
    'cardinality' => 5,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_visualizations',
    'foreign keys' => array(
      'eck_visualization' => array(
        'columns' => array(
          'target_id' => 'id',
        ),
        'table' => 'eck_visualization',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(
          'choropleth_visualization' => 'choropleth_visualization',
        ),
      ),
      'sync' => '',
      'target_type' => 'visualization',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
