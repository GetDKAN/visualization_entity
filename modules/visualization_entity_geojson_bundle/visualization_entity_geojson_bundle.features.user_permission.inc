<?php
/**
 * @file
 * visualization_entity_geojson_bundle.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function visualization_entity_geojson_bundle_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'eck view visualization geojson_visualization entities'.
  $permissions['eck view visualization geojson_visualization entities'] = array(
    'name' => 'eck view visualization geojson_visualization entities',
    'roles' => array(
      '0' => 'anonymous user', 
      '1' => 'authenticated user',
    ),
    'module' => 'eck',
  );

  return $permissions;
}
