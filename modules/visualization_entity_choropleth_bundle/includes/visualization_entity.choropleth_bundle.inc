<?php

/**
 * @file
 * Non-hook implementations for the Choropleth module.
 */

/**
 * Returns an array of Color Scales for the map.
 *
 * @return array
 *   array of Color Scales for the map.
 */
function visualization_entity_choropleth_bundle_color_scale_settings() {
  return array(
    0 => array('#ffffcc', '#ffeda0', '#fed976', '#feb24c', '#fd8d3c', '#fc4e2a', '#e31a1c', '#bd0026', '#800026'),
    1 => array('#ffffe5', '#fff7bc', '#fee391', '#fec44f', '#fe9929', '#ec7014', '#cc4c02', '#993404', '#662506'),
    2 => array('#ffffd9', '#edf8b1', '#c7e9b4', '#7fcdbb', '#41b6c4', '#1d91c0', '#225ea8', '#253494', '#081d58'),
    3 => array('#ffffe5', '#f7fcb9', '#d9f0a3', '#addd8e', '#78c679', '#41ab5d', '#238443', '#006837', '#004529'),
    4 => array('#fff7f3', '#fde0dd', '#fcc5c0', '#fa9fb5', '#f768a1', '#dd3497', '#ae017e', '#7a0177', '#49006a'),
    5 => array('#f7f4f9', '#e7e1ef', '#d4b9da', '#c994c7', '#df65b0', '#e7298a', '#ce1256', '#980043', '#67001f'),
    6 => array('#fff7fb', '#ece2f0', '#d0d1e6', '#a6bddb', '#67a9cf', '#3690c0', '#02818a', '#016c59', '#014636'),
    7 => array('#fff7fb', '#ece7f2', '#d0d1e6', '#a6bddb', '#74a9cf', '#3690c0', '#0570b0', '#045a8d', '#023858'),
    8 => array('#fff7ec', '#fee8c8', '#fdd49e', '#fdbb84', '#fc8d59', '#ef6548', '#d7301f', '#b30000', '#7f0000'),
    9 => array('#f7fcf0', '#e0f3db', '#ccebc5', '#a8ddb5', '#7bccc4', '#4eb3d3', '#2b8cbe', '#0868ac', '#084081'),
    10 => array('#f7fcfd', '#e0ecf4', '#bfd3e6', '#9ebcda', '#8c96c6', '#8c6bb1', '#88419d', '#810f7c', '#4d004b'),
    11 => array('#f7fcfd', '#e5f5f9', '#ccece6', '#99d8c9', '#66c2a4', '#41ae76', '#238b45', '#006d2c', '#00441b'),
  );
}

/**
 * Returns an array of options for the color scale select on the admin.
 *
 * @return array
 *   array of options for the color scale select on the admin.
 */
function visualization_entity_choropleth_bundle_color_scale_tableselect_options() {
  $settings = visualization_entity_choropleth_bundle_color_scale_settings();
  $output = array();
  foreach ($settings as $key => $colors) {
    $output[] = array(
      'uid' => $key,
      'colors' => theme('visualization-entity-choropleth-color-scale-option', array('colors' => $colors)),
    );
  }
  return $output;
}