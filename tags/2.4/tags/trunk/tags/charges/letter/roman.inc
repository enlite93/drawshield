<?php /* Copyright 2010 Karl R. Wilcox

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */

// Roman letter

$charge = array (

  'patterns' => array (
  'roman ?letter',
  ),

  'doc' => 'Stuff...',
  
  'flags' => array (
    'get_item' => 1,
    'default_colour' => 'sable',
  ),
  
);

if ( $node != null ) {

  $item = get_mod( $node, 'item' );
  if ( $item == null ) 
    $item = '?';
  else 
    $item = strtoupper($item{0});
  $charge['height'] = 44;
  $charge['width'] = 25;
  $charge['body'] = '<text stroke="none" x="12.5" y="44" text-anchor="middle" font-size="44" font-family="serif">' .
        $item . '</text>';

}

?>
