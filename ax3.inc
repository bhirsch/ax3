<?php 
/**
 * @file ax3.inc
 *  Site information about the website with ax2 installed.
 * 
 *  @todo Rather than make users edit this file,
 *  Aegir should be able to look at the settings 
 *  for ax1 and automatically create ax3 for 
 *  new platforms as they're created. Then install
 *  profile writers would simply have to enable
 *  ax3 during site installation and that's it. 
 */

/**
 * URL of the website where the 
 * 'website sign up' originated. 
 * 
 * @return
 *  string, url
 */
function ax3_url() {
  // The line below should look like this: 
  // $url = 'example.com';
  $url = 'starswithstripes.org';
  return $url;
}

/**
 *  This file also stores the required ax API key
 *  for sending a request to ax2.
 * 
 * @return
 *  string, api key
 */
function ax3_api_key() {
  // The line below should look like this: 
  // $key = '12345';
  $key = 'ehbQUagDBC2Z7ogJBTS6JwAA';
  return $key;
}
