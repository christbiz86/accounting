<?php

/* How to make new entries here for non-packaged languages:

-- 'code' should match the name of the directory for the language under \lang
.-- 'name' is the name that will be displayed in the language selection list (in Users and Display Setup)
-- 'rtl' only needs to be set for right-to-left languages like Arabic and Hebrew
-- 'encoding' used in translation file
-- 'version' always set to '' for manually installed languages.
-- 'path' installation path related to FA root (e.g. 'lang/en_US').
*/


$installed_languages = array (
  0 => 
  array (
    'code' => 'C',
    'name' => 'English',
    'encoding' => 'iso-8859-1',
  ),
  1 => 
  array (
    'name' => 'Indonesian',
    'package' => 'id_ID',
    'code' => 'id_ID',
    'encoding' => 'utf-8',
    'version' => '2.3.0-3',
    'path' => 'lang/id_ID',
  ),
  2 => 
  array (
    'name' => 'Chinese (Simplified)',
    'package' => 'zh_CN',
    'code' => 'zh_CN',
    'encoding' => 'utf-8',
    'version' => '2.3.0-4',
    'path' => 'lang/zh_CN',
  ),
  3 => 
  array (
    'name' => 'Chinese (Traditional)',
    'package' => 'zh_TW',
    'code' => 'zh_TW',
    'encoding' => 'utf-8',
    'version' => '2.3.0-2',
    'path' => 'lang/zh_TW',
  ),
);

$dflt_lang = 'C';
?>
