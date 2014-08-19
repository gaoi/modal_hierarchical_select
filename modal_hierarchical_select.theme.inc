<?php


/**
 * Format a Modal Hierarchical Select.
 */
function theme_modal_hierarchical_select($variables)
{
  $selected_terms = array();
  $output = '';

  $element = $variables['element'];
  $item_count = count($element['#value']);
  if ($item_count > 0) {
    $terms = taxonomy_term_load_multiple($element['#value']);
  }

 $output = taxonomy_term_view_multiple($terms, 'full');

  // print_r($element);
  return "<div>" . drupal_render($output) . "</div>";

}