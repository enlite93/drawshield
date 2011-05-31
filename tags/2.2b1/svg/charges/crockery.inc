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


function makeChg_crockery ( $node ) {
  $charge_data = array (
  'cauldron' => array (
    'height' => 315, 'width' => 333,
    'body' => '<g stroke="#000000" stroke-width="4" >
<path d="M 26.3,41.6 C 41,68.7 46.5,51.6 38.7,67.1 31,82.6 -0.35,112 6.97,163 c -2.33,65 43.33,72 40.23,83 -1.5,44 -12.4,53 -10,64 14.7,3 3.8,0 14.7,0 10.1,3 3.9,-45 16.3,-40 68.8,40 139.8,4 160.8,1 12,9 6,34 14,40 16,1 7,2 21,-1 5,-8 -23,-61 -8,-72 26,-28 25,-40 34,-63 8,-40 2,-60 -5,-72 C 275,81.1 254,53.2 260,50.1 266,47 266,40 271,36.1 208,5.95 193,12.1 158,15.2 145,-1.79 125,5.95 115,20.7 72.7,15 61.7,26.2 68.2,24.5 80.5,20.7 44.1,23.8 26.3,41.6 z" />
        <path d="m 167,43.1 c 0,0 62,97.9 130,126.9 21,9 35,16 31,2 -4,-13 -35,-38 -35,-38" stroke-width="12" fill="none" />
        <path d="m 34.8,41.6 c 33.1,15.5 96.2,7.9 111.2,4.6 -6,-21 40,-27.1 49,-4.6 41,24.8 68,-2.4 68,-2.4 l -1,0" stroke-width="12" fill="none" />
        <path d="m 135,21.4 c 7,8.6 3,4.7 3,4.7" stroke-width="12" fill="none" />
        <path d="m 265,172 c -16,59 -69,77 -69,77" fill="none" />
        <path d="m 246,167 c -16,59 -69,77 -69,77" fill="none" />
        <path d="m 248,226 c -34,12 -67,-25 -67,-25" fill="none" />
        <path d="m 261,209 c -34,12 -67,-25 -67,-25" fill="none" /></g>'  ),
'chalice' => array ( 'width' => 100, 'height' => 140,  'body' => '<g stroke-width="2" stroke="#000000">
		<path
       d="M 5.051,14.12 C 22.73,-0.5272 79.3,1.498 98.49,14.63 101,47.97 60.61,67.15 60.61,67.15 l 0,13.64 c 0,3.61 9.77,4.48 10.11,8.08 0.51,5.37 -12.63,10.1 -12.63,10.1 0,0 -2.26,8.13 -0.5,11.63 5.14,10.1 28.28,18.7 28.28,18.7 l 0.51,7.6 c -6.06,4 -66.17,7.6 -75.26,0 l 1.01,-5.6 c 0,0 23,-10.3 28.29,-20.7 1.75,-3.5 0,-11.63 0,-11.63 0,0 -9.47,-5.96 -9.1,-10.6 0.35,-4.41 10.11,-4.17 10.11,-8.59 l 0,-12.12 c 0,0 -40.9147,-22.73 -36.369,-53.54 l -0.01,0 z" />
       <g fill="none">
    <path
       d="M 4.546,15.13 C 42.43,36.85 98.99,15.64 98.99,15.64" />
    <path
       d="M 4.041,23.21 C 37.88,37.36 95.96,26.24 97.48,22.71" />
    <path
       d="m 38.89,66.65 c 11.62,5.05 20.71,0.5 23.23,1.01" />
    <path
       d="m 32.32,87.86 c 6.57,6.57 31.82,3.03 37.38,2.53" />
    <path
       d="m 40.91,81.8 c 9.09,5.05 14.14,2.02 20.2,0" />
    <path
       d="m 40.41,97.46 c 6.06,4.04 15.15,3.04 18.68,1.51" />
    <path
       d="m 13.64,130.3 c 13.63,4.5 66.16,5.5 71.21,0.5" />
    <path
       d="M 91.92,29.27 C 87.88,40.39 76.77,54.53 67.18,60.08" />
    <path
       d="m 54.55,111.6 c 4.04,6.1 19.19,17.7 22.22,16.7" />
    <path
       d="m 58.08,71.2 0.51,9.59" />
       </g></g>
    <path fill="#4d4d4d" fill-opacity="0.75" stroke="none"
       d="M 5.556,14.12 C 36.87,0.4847 81.32,9.576 96.97,14.63 112.6,19.68 26.77,33.82 5.556,14.12 z" />', ),
'mug' => array ( 'width' => 140, 'height' => 132,  'body' => '<g stroke-width="2" stroke="#000000" > 
        <path d="m 104,25.2 c 7,-5.6 10,-12.4 21,-4 9,6.5 22,24.8 9,62.1 -4,12.1 -13,11.1 -24,4.1 -3,-3.6 -3,-20.8 -3,-20.8 0,0 7,-0.5 12,7.6 7,4.3 5,-23.5 5,-28.8 -1,-5.3 -6,-16.4 -10,-17.2 -3,-0.7 -1,4.6 -1,8.1 2,8.3 -7,2.3 -8,2 -2,-0.2 0,-13.1 -1,-13.1 z" />
        <path d="M 21.9,1 105,1 c 6,-0.3 8,3.2 -2,7.3 -1,3.3 9,110.7 9,110.7 0,0 1,0 0,0 12,3 10,10 0,10 -5,4 -105.7,1 -105.7,1 0,0 -11.89,-2 -0.3,-9 9.6,1 16.2,-111.7 16.2,-111.7 0,0 -8.6,0.2 -6.6,-5.8 1.3,-3.6 6.3,-1.8 6.3,-2.5 z" />
        <path d="M 21.5,9.53 102,8.52" />
        <path d="M 8.33,120 C 17.4,124 106,122 112,119" /><g fill="none" stroke-width="1">
        <path d="M 27.9,17.1 17.9,113" />
        <path d="M 30.3,21.1 C 30.6,23.2 21.2,109 21.2,109" />
        <path d="m 32.9,25.4 -8,78.6" />
        <path d="M 36.1,32.3 28.3,103" /></g></g>', ),
'covered-cup' => array ( 'width' => 140, 'height' => 310, 'body' => '
	<g stroke-width="4" stroke="#000000" >
	<path d="m 19,290 111,0 0,20 -112,0 1,-20 z" />
    <path
       d="m 59.6,47.46 c 0,0 2.59,-37.36 16.16,-37.38 14.33,0 17.17,39.4 17.17,39.4" />
    <path
       d="m 19,290 21,-20 c 4,0 9,-10 12,-10 7,-10 12,-40 12,-40 3,-10 -30,-30 -39,-50 -5,-10 -5,-40 -5,-40 0,0 -11.7,0 -10,-10 2,-10 12,-10 12,-10 0,0 19,-24 21,-38 4,-30 31.49,-28.4 30.91,-28.4 -0.59,0 27.89,-1.6 31.89,28.4 2,14 21,38 21,38 0,0 10,0 12,10 1.7,10 -10,10 -10,10 0,0 0,30 -5,40 -9,20 -41.97,40 -38.97,50 0,0 5,30 12,40 2.97,0 7.97,10 11.97,10 l 21,20" />
    <g fill="none">
    <path
       d="m 38,270 72,0" />
    <path
       d="m 50,260 50,0" />
    <path
       d="M 63.96,220.5 85,220" />
    <path
       d="m 26.26,107.6 96.94,0" />
    <path
       d="M 126.3,131.8 17.17,131.3" />
    <path
       d="m 59.6,208.1 31.82,0" />
    <path
       d="m 59.09,250 31.32,0" />
    <path
       d="m 59.09,209.1 c 0,0 -33.84,-71.2 -29.8,-34.9" />
    <path
       d="m 65.66,207.6 c 0,0 -24.24,-79.8 -27.27,-38.9" />
    <path
       d="m 53.03,167.7 c 14.65,-49 20.21,39.9 20.21,39.9 0,0 10.1,-85.4 18.18,-39.5" />
    <path
       d="m 83.34,207.1 c 0,0 39.86,-75.3 36.36,-31.9" />
    <path
       d="m 78.79,207.1 c 0,0 21.21,-81.9 29.31,-40.4" />
    <path
       d="m 67.18,164.6 c 0,0 7.57,-25.2 13.63,0.5" />
    <path
       d="m 87.38,55.54 c 0,0 10.09,7.58 8.58,18.69 -1.52,11.11 14.64,25.75 14.64,25.75" />
    <path
       d="m 63.13,30.29 c 7.08,5.05 19.7,5.04 27.28,-0.51" />
    <path
       d="m 11.11,120.2 c 9.09,-8.1 12.12,-14.7 18.18,-1.5 6.07,13.1 9.6,16.6 15.66,-2 6.06,-18.74 18.69,-2.6 16.67,3 -2.02,5.5 10.61,22.7 21.21,0 10.61,-22.75 16.16,-2 19.67,0 3.6,2 9.1,23.7 18.2,-0.5 9.1,-24.27 14.2,3.5 14.2,3.5" />
       </g></g>'),
    );
  $type = $node->get_attribute('subtype');
  if ( isset($charge_data[$type]) ) {
      return $charge_data[$type];
  } else {
    my_trigger_error ( "No crockery $type", E_USER_WARNING, __FILE__, __LINE__ );
    return null;
  }
}
?>