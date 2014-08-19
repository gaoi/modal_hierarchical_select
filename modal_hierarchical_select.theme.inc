<?php

/**
 * Return a themed Modal Hierarchical Select form element.
 */
function theme_modal_hierarchical_select_form_element($variables) {
  $element = $variables['element'];
  $value = $variables['value'];

  $output = '<div class="form-item hierarchical-select-wrapper-wrapper"';
  if (!empty($element['#id'])) {
    $output .= ' id="' . $element['#id'] . '-wrapper"';
  }
  $output .= ">\n";
  $required = !empty($element['#required']) ? '<span class="form-required" title="' . t('This field is required.') . '">*</span>' : '';

  if (!empty($element['#title'])) {
    $title = $element['#title'];
    if (!empty($element['#id'])) {
      $output .= ' <label for="' . $element['#id'] . '">' . t('!title: !required', array('!title' => filter_xss_admin($title), '!required' => $required)) . "</label>\n";
    }
    else {
      $output .= ' <label>' . t('!title: !required', array('!title' => filter_xss_admin($title), '!required' => $required)) . "</label>\n";
    }
  }

  $output .= " $value\n";

  if (!empty($element['#description'])) {
    $output .= ' <div class="description">' . $element['#description'] . "</div>\n";
  }

  $output .= "</div>\n";

  return $output;
}

/**
 * Format a Modal Hierarchical Select.
 */
function theme_modal_hierarchical_select($variables)
{
  $element = $variables['element'];
  print_r($element);
  return '<div ' . drupal_attributes($element['#attributes']) . '>' . drupal_render_children($element) . '</div>';
}