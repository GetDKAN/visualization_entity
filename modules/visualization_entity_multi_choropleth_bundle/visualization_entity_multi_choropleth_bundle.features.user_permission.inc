<?php
/**
 * @file
 * visualization_entity_multi_choropleth_bundle.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function visualization_entity_multi_choropleth_bundle_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck view visualization multi_choropleth_visualization entities'.
  $permissions['eck view visualization multi_choropleth_visualization entities'] = array(
    'name' => 'eck view visualization multi_choropleth_visualization entities',
    'roles' => array(
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'eck',
  );

  return $permissions;
}
