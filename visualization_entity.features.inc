<?php
/**
 * @file
 * visualization_entity.features.inc
 */

/**
 * Implements hook_eck_entity_type_info().
 */
function visualization_entity_eck_entity_type_info() {
  $items = array(
    'visualization' => array(
      'name' => 'visualization',
      'label' => 'Visualization',
      'properties' => array(
        'title' => array(
          'label' => 'Title',
          'type' => 'text',
          'behavior' => 'title',
        ),
        'uid' => array(
          'label' => 'Author',
          'type' => 'integer',
          'behavior' => 'author',
        ),
        'created' => array(
          'label' => 'Created',
          'type' => 'integer',
          'behavior' => 'created',
        ),
        'changed' => array(
          'label' => 'Changed',
          'type' => 'integer',
          'behavior' => 'changed',
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implements hook_context_default_contexts_alter().
 */
function visualization_entity_context_default_contexts_alter(&$data) {
  if (isset($data['resource'])) {
    $data['resource']->reactions['block']['blocks']['dkan_dataset-dkan_dataset_resource_nodes']['weight'] = -9; /* WAS: -10 */
    $data['resource']->reactions['block']['blocks']['dkan_sitewide-dkan_sitewide_resource_add']['weight'] = -9; /* WAS: -10 */
    $data['resource']->reactions['block']['blocks']['dkan_sitewide-dkan_sitewide_social']['weight'] = -8; /* WAS: -9 */
    $data['resource']->reactions['block']['blocks']['views-resource_visualizations-block'] = array(
      'module' => 'views',
      'delta' => 'resource_visualizations-block',
      'region' => 'content',
      'weight' => 10,
    ); /* WAS: '' */
  }
}
