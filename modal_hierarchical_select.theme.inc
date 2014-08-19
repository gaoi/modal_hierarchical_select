<?php

/**
 * Format a modal hierarchical select.
 */
function theme_modal_hierarchical_select($variables)
{
  $element = $variables['element'];
  print_r($element);
  return '<div ' . drupal_attributes($element['#attributes']) . '>' . drupal_render_children($element) . '</div>';
}