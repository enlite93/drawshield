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

// crow

$charge = array (

  'patterns' => array (
  '(crow|daw|rook|raven)s?',
  ),
  'modifiers' => array (
    array ( 'legged', 'legged', 'feature' ),
    array ( 'beaked', 'beaked', 'feature' ),
    array ( 'volant', 'volant', 'mod', 'variant' ),
    array ( 'rising', 'rising', 'mod', 'variant' ),
  ),
  
  'doc' => 'Stuff...',
);

switch ( 'crow-' . get_mod( $node, 'variant' )) {
  case 'crow-volant': $svg = array ( 'width' => 210, 'height' => 160, 'proper' => '#050505', 'body' => 
       '<path stroke="#404040" stroke-width="2" d="m 14,160 c -1,-10 0,-20 1,-20 -2,0 -2,10 -6.1,10 C 5,150 7.6,140 6.4,130 4.8,99 5.5,71 9.2,42 10,31 13,19 19,9.4 c 6,-8 20,-0.6 17,9.6 1,9 -4,17 -3,26 9,3 19,3 27,0 0,-7 14,-5 8,-13 -2,-6 -18,-16 -6,-20 9,-1 19,5 24,13 5,7 8,16 14,21 10,-6 -2,-16 -6,-23 -6,-8 2,-17.1 16,-14.9 30,-1.7 60,-2.9 90,-2.2 10,1.6 0,8.1 0,8.1 10,-2 20,6 0,6 0,1 -20,-1 0,4 -10,3 -10,6 0,6 0,-1 10,5 0,5 -10,2 -10,5 -20,5 10,0 20,5 10,7 -10,-2 0,7 0,8 0,6 -10,-1 -10,5 -10,0 10,6 0,9 0,-1 -10,-6 -10,0 -10,0 10,6 0,9 0,-2 -10,-3 -10,0 -10,-2 -10,1 0,2 0,1 0,9 0,6 -10,-4 -10,-5 -10,2 0,9 -10,-4 -10,2 -10,-3 -10,-12 -20,-13 0,8 10,16 10,23 10,10 20,20 20,20 10,10 20,20 20,20 0,10 -10,0 -20,0 -10,0 -20,-10 -30,-20 -10,0 -10,-10 -20,-10 0,0 0,10 -5,0 -5,0 -14,10 -14,0 0,-10 -1,-13 -3,0 -4,10 -10,-14 -18,-10 -8,0 3,-8 3,-12 5,-7 6,-14 2,-21 -2,-5 -2,-2 -3,2 -2,10 -3,21 -8,30 -1,1 -4,11 -5,1 -1,-4 -7,10 -7,10 0,10 -13,10 -11,20 2,10 -6,20 -5,10 0,-10 3,-20 -1,-10 -7,0 -4,10 -6,20 -1,0 -2,10 -5,10 z" />
       <path fill="#ff0000" stroke="#404040" stroke-width="1" d="m 67,17 a 2.3,2 0 1 1 -6,0 2.3,2 0 1 1 6,0 z"/>',
   'features' => array (
       'beaked' => array ( 'proper' => '#EC6C00', 'body' =>
   '<path d="m 58,35 c -5,-5 -4,-7 2,-2 2,2 4,2 6,2 2,-2 -12,-9 -15,-9 -2,2 -4,0 -4,-2 -4,-11 7,-10 15,0 10,9 10,15 4,15 -4,2 -6,0 -8,-4 z" />' ),
       'legged' => array ( 'proper' => '#EC6C00', 'body' =>
    '<path d="m 90,130 c -1,0 -1,0 -3,0 0,10 -4,10 -8,10 -2,-10 0,-10 2,-10 6,-10 4,-10 -4,0 -5,0 -7,0 -7,0 0,0 -2,0 -4,-10 -4,0 -6,0 -8,10 0,0 -2,0 0,0 0,0 0,10 -4,10 -3,0 -5,-10 -3,-10 l 0,-10 -4,10 c -2,0 -4,0 -6,0 -4,0 -2,-10 6,-10 6,0 6,0 2,0 -4,0 -6,0 -6,0 -2,0 -2,0 -2,0 0,-10 2,-10 4,-10 0,0 2,0 0,0 0,0 0,0 2,-10 2,0 2,0 2,0 0,10 7,20 9,20 2,0 4,-10 4,-20 0,0 6,0 10,10 1,0 0,0 -4,0 -2,0 -4,10 -4,10 0,0 9,0 11,0 0,0 4,0 8,0 6,0 6,0 6,0 0,-10 1,-10 7,-10 2,0 2,10 0,10 -6,0 0,0 4,0 10,0 10,0 10,0 0,10 0,10 -10,0 -2,0 -6,0 -6,10 4,10 4,10 0,10 0,0 -4,0 -4,-10 z" />' ),
   ));
   break;
  case 'crow-rising': $svg = array ( 'width' => 275, 'height' => 260, 'proper' => '#050505', 'body' => 
       '<path stroke="#404040" stroke-width="4" d="m 207,224.2 c -4.1,-6.9 -12.7,-10.3 -17,-15.8 -5.8,-5 -10.9,-9.8 -17.1,-14 -3,-2.9 -12,-3.6 -9.1,3 -6.7,-5.6 -14.7,-9.6 -22.6,-12.1 -7,-2.1 -16.6,-5.3 -23.2,-0.9 -0.9,5.7 9.7,-0.2 6.9,6.7 -1.4,7.6 3.2,14 2.9,21.3 -5.7,6.4 -14.4,-6.3 -15.5,-12.4 -3.6,-6.6 -6.6,-13.8 -12.46,-19.2 -6.6,-4.6 -13.65,-7.6 -21.16,-10.3 -6.61,-4.8 -15.89,-7.6 -18.7,-15.3 -7.55,-6.3 -10.15,-14.7 -11.57,-23.7 -1.78,-8.6 2.47,-16.4 1.74,-25 1.36,-7 -4.75,-12.8 2.79,-15.6 -2.32,-3.7 -3.5,-10.4 -6.59,-14.1 7.18,0.1 14.98,-8.2 10.84,-15.2 -4,2.2 -13.08,5.9 -15.57,11.4 -6.04,1.7 1.02,-5.5 0.45,-8.9 4.37,-9.2 15.72,-7.1 24.32,-6.9 7.89,2.3 8.33,10.8 12.71,16.4 -0.95,8.2 4.12,14.3 5.46,21.8 5.69,5.7 12.34,15.5 20.94,9.5 8.2,-1.3 7.6,-9.7 12.3,-15.3 5.8,-2.1 -1.5,-6.6 -1,-11.4 -0.8,-3.3 -1.9,-7.1 -3.5,-8.8 8.2,-2.7 -7.8,-3.6 0.1,-6 2.1,-4.5 -5.7,-7.9 0.4,-9.9 2.6,-6 4.8,-13.3 12.1,-14.7 8.8,-2.5 -2.8,4.4 -3,8 -3.6,3.9 -2.2,4.1 0,7.7 -6.5,5.6 2.5,11.7 4.9,17.5 0.9,9.7 -0.2,21.1 -8.4,27.5 -5.3,3.5 -9.4,8.8 -16.1,10 -6.45,2.5 -15.59,3.3 -11.05,12.9 3.72,6 -0.98,16.4 7.13,19.2 8.52,1.6 14.92,4.2 21.82,9.7 8.1,2.9 17.6,1.1 25.2,4.7 6.2,3.1 9.2,10.6 17,11.2 2.7,7.1 10.1,8.5 15.3,12.7 5.1,2.9 7.6,6.2 13.1,3.6 3.8,6.1 14.3,6.5 13,15.7 3.3,7.4 10.9,11.8 16.7,15.9 4.3,3.2 2.5,12.5 -2.4,5.7 -4.5,-5.8 -11.6,-8.9 -16.4,-14.3 -3.3,-3 -8.2,-11.4 -11.9,-11 -1.8,8.9 8.7,12.1 12.3,18.4 3.6,3.9 8.3,6.6 11.7,9.8 -0.2,3.5 -6,1.9 -7.8,0.5 z M 117.8,96.4 c -2.7,-4.1 -2.3,3.9 0,0 z" />
       <path stroke="#404040" stroke-width="4" d="m 127.9,147.9 c -4.3,-3.3 -11,-2.4 -13.6,-7.5 -7.1,-3.2 -0.8,-7.2 4.1,-5.6 6.4,-0.5 9.4,-8.7 17,-8 4.8,-3.8 4.4,-10.3 10.8,-11.3 3.1,-3.4 6.2,-7 7,-12 2.8,-3.8 7.3,-7 6,-13.1 -1.1,-7.1 12.4,-12.1 4.5,-18.5 -4.6,-2.6 5.2,-5.5 2.6,-10.2 -0.4,-4.4 -3.5,-8.1 0,-11.8 0,-4.6 -9.2,-7.6 -9.7,-2.6 8.8,2.1 2.3,8.8 -2.3,10.6 0.6,3.7 12.1,1.5 6.1,8.1 -3.2,2.2 -9.7,4.6 -2.1,6.6 6.1,3.4 0.3,9 -3.8,9.7 -1,6.3 1.8,14.3 -4.8,17.7 -4.9,2.3 -0.9,13.5 -9.7,12.6 -5.1,0.5 -2.2,11.6 -10.4,9.5 -5.7,-0.2 -6,8.9 -13.2,6.6 -8.2,-2.6 -8.4,9.3 -15.5,8.1 -3.7,1.1 -1.84,-3.3 -2.27,-5.5 0.85,-5 -1.49,-10 -3.8,-13.1 5.77,-0.4 9.67,-4 14.37,-5.6 6.3,-0.1 8.2,-7.3 13.5,-9.1 6.7,-2.8 7.2,-11.5 7.3,-17.9 1.9,-5.8 4.1,-11.8 -0.1,-17.4 -2.4,-4.7 -5.6,-10 -3.9,-16.1 1.1,-5.7 4.9,-9 9.4,-12 4.9,-3 11.2,-1.9 16,-5.2 2.6,-2.1 7,-4.8 9.9,-3.2 -5.9,5.4 8.5,4.1 12,4.2 7.7,0.1 14.4,-4.4 22.3,-3.1 7.1,0 14.4,0.1 21.3,-1.9 7.1,0 13.9,-1.9 20.7,-3.2 6.5,0.2 12.4,-2 18.1,-4 6.3,1.1 -4.3,4.1 -6.4,4.6 -2.9,3.4 -6.6,5 -11.2,6.5 -5.6,1.7 -11.8,2.5 -16.9,4.7 -5.5,2.1 -11.6,1.9 -17,4.8 -6.5,1.6 -14,-1 -20,2.3 -3.5,-0.2 -12.3,0.5 -6.3,5 7.4,1.5 14.4,-0.7 21.4,-2 8.1,-1 16.7,-0.8 24.4,-3.6 6.3,-1.3 12.7,-1.8 19,-3.7 2.6,-2.3 13.9,-4.3 8.5,1.1 -2.4,3.1 -7.3,4.9 -9.3,8.4 -5.9,1.8 -11.9,4.2 -18.1,5.2 -6.7,1.3 -13.4,2.9 -20.4,2.9 -6.8,1.2 -15,-0.4 -20.7,3.8 -10.3,0.9 3,8.9 6.8,3.9 7,-1.1 14.4,-0.6 21,-3.3 7.2,0.3 13.7,-3.1 21,-2.2 3.2,-0.3 17.2,0.3 7.7,2.6 -3.9,2.1 -7.2,4.2 -11.3,6.7 -7.6,1.5 -13.1,6.1 -21.3,5.1 -6.6,3 -14.9,1 -21.1,4.7 -3.8,-2.7 -8.6,1 -13.8,0.7 -1,8.1 11.2,5.8 16.7,6.7 7,3.3 14.9,1.3 21.9,-0.3 5.5,-0.5 4.8,2.7 -0.1,2.5 -5.2,3.7 -10.9,4 -16.6,6.2 -7.5,-0.1 -14,4.4 -21.5,3.3 -3.2,-2.9 -10.8,-0.8 -7.7,4.3 6.1,1.7 12.8,1.5 17.8,5.5 3.8,-0.5 9.5,2.4 2.3,2.5 -6.2,1.9 -13,2.5 -19.7,1.7 -3.4,-2 -18,-3.7 -11.5,3 6.6,1.6 12.7,5.3 19.9,5.7 2.8,2 -5.6,2.5 -7.3,3.6 -7.6,1.1 -16.4,-1.3 -23.2,2.6 -2,3.6 4.9,3.4 5,7.3 9.1,1.8 -6.9,4 -8.9,0.9 -4.3,1.2 -8.8,-7.6 -10.9,-1.1 -0.8,5.4 12.3,8.9 4.6,12.6 -1.4,-0.1 -3.7,0.3 -4.6,-1 z" />
       <path stroke="#404040" stroke-width="4" d="m 103.7,205.5 c -0.2,-1.5 -2.4,-0.7 -3.1,-1.9 -1.53,-1.5 -2.04,-3.8 -2,-5.9 0,-1.2 -0.57,-2.3 -1.69,-2.7 -0.45,-1.1 -0.23,-2.6 -1.7,-2.8 -1.09,-1.3 -0.1,-3.4 -1.36,-4.6 -0.95,-0.3 -2.21,-0.6 -2.26,-1.9 -0.25,-1 0.41,-3.1 1.69,-2.1 0.21,1.2 1.18,1.9 2.41,1.8 1.11,0.4 1.03,2.1 2.53,1.9 1.37,-0.3 2.58,0.8 2.48,2.2 0,1 0,2.6 1.3,2.9 1.3,-0.1 1.8,1.4 1.7,2.5 -0.1,1.2 0.3,2.5 1.6,2.8 0.8,1.2 0,2.9 1.2,3.8 1.6,-0.1 1.3,1.8 0.6,2.6 -0.7,1 -1.6,2 -2.7,2.4 -0.6,0.1 -0.7,-0.6 -0.7,-1 z" />
       <path fill="#ff0000" stroke="#404040" stroke-width="1" d="m 42.93,73.72 c 3.54,-5.56 12.88,-12.62 13.89,-10.1 2.52,6.82 -9.34,12.63 -9.34,12.63"/>',
   'features' => array (
       'beaked' => array ( 'proper' => '#EC6C00', 'body' =>
   '<path stroke="#404040" stroke-width="1" d="m 34.85,68.67 c 0,0 -33.335,11.62 -30.809,16.16 2.525,4.55 37.379,-6.06 38.389,-4.04 1.01,2.02 -19.2,12.12 -21.72,12.12 -2.53,0 10.1,6.06 23.23,0 13.13,-6.06 -9.09,-25.25 -9.09,-24.24 z" />' ),
       'legged' => array ( 'proper' => '#EC6C00', 'body' =>
   '<path stroke="#404040" stroke-width="2" d="m 82.72,244.4 c -1.8,-2.4 -0.71,-5.6 -1.83,-8.1 -2.18,-1.7 -2.96,2.7 -5.6,1.5 -4.11,-0.8 -0.51,-6.1 1.67,-7.3 1.3,-0.9 5.44,-1.4 3.81,-3.7 -2.24,0.8 -3.13,-3.8 -4.34,-0.9 -3.04,0.8 -5.88,1.8 -7.86,4.5 -2.7,0 -2.29,4.8 -5.51,3.1 -2.55,-2.3 1.39,-3.8 1.21,-6.2 0.74,-1.6 -1.3,-5.5 -2,-2.1 -0.44,2 -3.22,1.4 -3.65,3.4 -2.17,-1.4 -1.1,-5.7 -1.38,-8.3 -0.54,-3.2 2.61,-4.8 5.36,-4.5 7.26,-0.1 14.52,0.2 21.78,0.3 2.51,-2.6 4.66,-5.6 7.78,-7.5 1.89,-0.5 1.5,-3.9 4.22,-3.2 1.73,-1.9 4.52,-2.3 7.12,-1.7 3.3,2.1 -0.8,4.7 -3.4,3.8 -2.35,-0.1 -2.85,2.3 -5.07,2.5 -0.1,2.6 -2.51,2.3 -4.08,3.3 -0.93,2.6 -0.9,7.4 3.14,6.3 1.95,-0.6 5.18,1.6 1.96,2.5 -3.25,1.8 2.4,2.9 4.05,2.6 3.3,-0.1 7.6,-1.9 7.6,-5.7 1.1,-2.7 4.8,-3.9 4.1,-7.4 -0.2,-2.4 -0.4,-7.7 3.4,-5.7 0.9,3.3 5.3,3.7 6.5,7.2 0.2,2.1 -3.5,2.1 -4.5,4.1 -2.4,1.7 -3.2,4.5 -5.3,6.4 -1.7,1.6 -6.1,6.7 -2.1,7.8 2.9,0.6 6,0.3 9,0.4 0.1,2.3 -0.4,4.9 0.8,6.9 3.4,1.3 -1.4,2.9 -3,2 -3,-0.2 -4.8,-3.3 -8,-3.1 -2.3,-1.7 -5.3,-1.6 -8.1,-1.7 -3.24,0 -6.6,-0.3 -9.77,0.6 -1.75,1.8 -4.82,2.8 -4.7,6.1 -0.23,2.2 -1.33,4.6 -3.31,1.8 z m 21.98,-14.2 c 1,-4.1 -3.9,-4 -6.47,-3 -1.39,1.8 -4.4,2.3 -5.35,4.9 -0.32,2.5 4.58,1.3 6.41,1.7 1.81,0 3.61,0 5.41,0 0,-1.2 0,-2.4 0,-3.6 z m -21.22,-9 c -0.91,-2.3 -5.58,-2.1 -7.02,-0.4 0.27,2.8 5.09,2.2 6.81,1.1 l 0.16,-0.3 0,-0.4 z" />' ),
   ));
   break;
  default:
  case 'crow-': $svg = array ( 'width' => 225, 'height' => 180, 'proper' => '#050505', 'body' => 
       '<path stroke="#404040" stroke-width="2" d="m 60,16 c 0,0 -1,9 -1,12 3,5 14,1 11,8 -1,7 -19,21 -19,21 0,0 -13,22 49,63 0,10 10,20 20,20 10,0 20,20 20,10 0,0 0,0 0,0 0,-20 10,-10 10,-10 0,0 0,10 0,10 0,0 10,0 10,0 10,0 -10,-10 0,-10 20,0 20,20 50,20 0,0 20,0 20,-10 -10,-10 -40,-20 -40,-20 0,-10 20,0 20,0 10,0 -10,-10 -20,-10 0,0 -10,-10 0,-10 10,0 20,20 30,10 0,0 -50,-23 -50,-23 0,0 -20,-12 -30,-31 0,-9 -30,-16 -30,-22 0,-3 0,-16 0,-26 C 110,14 99,7.7 87,6.3 83,5.5 70,5.3 60,16 z" />
       <path fill="#ff0000" stroke="#404040" stroke-width="1" d="m 80,20 a 3.9,4.1 0 1 1 -8,0 3.9,4.1 0 1 1 8,0 z"/>
       <path fill="none" stroke="#404040" stroke-width="2" d="M 90,67.972 C 73.415,100.17 193.9,125.05 193.9,125.05"/>',
   'features' => array (
       'beaked' => array ( 'proper' => '#EC6C00', 'body' =>
   '<path stroke="#404040" stroke-width="1" d="m 58,16 c 0,0 -33,1 -37,6 -3,5 32,5 35,5 3,-1 3,-11 2,-11 z" />
   <path stroke="#404040" stroke-width="1" fill="none" d="m 59,22 c 0,0 -32,-1 -36,1" />' ),
       'legged' => array ( 'proper' => '#EC6C00', 'body' =>
    '<path d="m 130,140 c 0,0 0,30 0,30 -10,10 -30,0 -32,0 -6,10 22,10 22,10 0,0 0,0 10,0 10,0 0,10 10,10 0,-10 0,-10 10,-10 10,0 20,10 30,0 0,0 -20,0 -20,0 0,-10 10,-30 0,-30 0,0 0,10 -10,0 0,0 0,20 0,20 0,0 -10,10 -10,0 0,0 0,-20 0,-20 0,0 -10,0 -10,-10 z" />' ),
   ));
   break;
}

$charge = array_merge($charge, $svg);

?>