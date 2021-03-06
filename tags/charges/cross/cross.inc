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

// cross

$charge = array (

  'patterns' => array (
  '?plain cross(es)? ?passant',
  ),
  'either' => array ( 'cross', 'cross', ),

  'doc' => 'Stuff...',

  'height' => 200,
  'width' => 150,
  'body' => '<polygon stroke="#000000" stroke-width="4" points="0,50 50,50 50,0 100,0 100,50 150,50 150,100 100,100 100,200 50,200 50,100 0,100"  />',

)

?>
