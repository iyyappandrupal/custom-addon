<?php

/* @file
 * Provides Rules integration for the Commerce Product Add On module
 */

function custom_addon_rules_event_info() {
  $items = array(
    'custom_addon_add_to_cart' => array(
      'label' => t('After a user adds a product to the cart, with a product add-on selected'),
      'module' => 'custom_addon',
      'group' => t('Commerce Cart'),
      'variables' => array(
        'commerce_product' => array(
          'type' => 'commerce_product',
          'label' => t('The product checked as an add-on in the add to cart form'),
        ),
        'quantity' => array(
          'label' => t('Base Product Quantity'),
          'type' => 'integer',
        ),
      ),
    ),
  );

  return $items;
}
