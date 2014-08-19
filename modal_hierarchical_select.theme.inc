<?php


/**
 * Format a Modal Hierarchical Select.
 */
function theme_modal_hierarchical_select($variables)
{
  $element = $variables['element'];
  $item_count = count($element['#value']);
  if ($item_count > 0) {
    $terms = taxonomy_term_load_multiple($element['#value']);
  }

  print_r($element);
  return "<div>$item_count item(s) selected.</div>";
}