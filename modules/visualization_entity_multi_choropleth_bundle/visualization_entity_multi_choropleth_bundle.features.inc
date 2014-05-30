<?php
/**
 * @file
 * visualization_entity_multi_choropleth_bundle.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function visualization_entity_multi_choropleth_bundle_eck_bundle_info() {
  $items = array(
    'visualization_multi_choropleth_visualization' => array(
      'machine_name' => 'visualization_multi_choropleth_visualization',
      'entity_type' => 'visualization',
      'name' => 'multi_choropleth_visualization',
      'label' => 'Multi Choropleth Visualization',
    ),
  );
  return $items;
}
