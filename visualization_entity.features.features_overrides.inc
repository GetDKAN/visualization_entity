<?php
/**
 * @file
 * visualization_entity.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function visualization_entity_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: context
  $overrides["context.resource.reactions|block|blocks|dkan_dataset-dkan_dataset_resource_nodes|weight"] = -9;
  $overrides["context.resource.reactions|block|blocks|dkan_sitewide-dkan_sitewide_resource_add|weight"] = -9;
  $overrides["context.resource.reactions|block|blocks|dkan_sitewide-dkan_sitewide_social|weight"] = -8;
  $overrides["context.resource.reactions|block|blocks|views-resource_visualizations-block"] = array(
    'module' => 'views',
    'delta' => 'resource_visualizations-block',
    'region' => 'content',
    'weight' => 10,
  );

 return $overrides;
}
