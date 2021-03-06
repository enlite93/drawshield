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

// battle-axe

$charge = array (

  'patterns' => array (
  'battle axes?',
  'battleaxes?',
  ),

  'modifiers' => array (
    array ( 'handle', 'handled?s?', 'feature' ),
    array ( 'blade', 'bladed?s?', 'feature' ),
    ),

  'doc' => 'Stuff...',

  'height' => 395,
  'width' => 261,
  'orient_to_ordinary' => true,
  'hflex' => 1.4,
  'wflex' => 1.2,
  'body' => '<g />',
  'features' => 
  array (
    'handle' => 
    array (
      'body' => '<path  stroke="#000000" stroke-width="3" d="M 151.7,4.454 130,53.42 l 18.7,42.32 -7.2,6.06 -3.7,222.5 -8.4,24.8 22.9,40.5 23,-39.9 -7.8,-24.2 C 163.3,234.7 165.4,176.1 162,101.8 l -9,-6.66 15.7,-42.93 -17,-47.756 z" />
    <g stroke="#000000" stroke-width="3" fill="none" >
    <path  d="M 151.14,28.03 L 151.14,28.03 L 151.74,77.60"  />
    <path  d="M 154.16,159.82 L 152.34,340.58"  />
    <path  d="M 153.80,361.26 L 153.05,380.07"  />
    <path  d="M 158.20,302.50 L 158.81,342.40"  />
    <path  d="M 163.04,325.10 L 166.67,342.03"  />
    <path  d="M 162.98,361.29 L 158.74,367.94"  />
    <path  d="M 131.51,348.34 C 154.12,361.30 175.92,351.47 175.92,351.47 L 175.92,351.47 L 174.71,348.05"  />
    <path  d="M 139.78,148.76 C 158.59,162.01 162.87,146.62 162.87,146.62"  />
    <path  d="M 139.78,109.43 C 158.59,122.68 162.87,107.29 162.87,107.29"  />
    </g>',
    ),
    'blade' => 
    array (
      'body' => '<path stroke="#000000" stroke-width="3" d="m 148.7,95.74 -7.2,6.06 0.6,18.1 c 0,0 -25.3,2 -39.3,-9 -11.73,-9.3 -28.44,-20.6 -3.65,-69.57 12.65,2.42 -84.59,2.55 -79.8,88.87 3.78,67.1 60.45,91.3 84.65,84.6 -15.73,-24.1 -19.36,-58.6 3.6,-71.9 21.6,-12.5 33.9,-7.9 33.9,-7.9 l -0.3,18.2 22,0.3 0.6,-19.1 c 0,0 38.1,13.1 47.8,13.9 1.4,-7.7 -15.7,-15.1 -7.9,-15.1 7.9,0 37.5,-1.8 41.8,-6.6 4.2,-4.9 -49.7,0.5 -43,-2.4 6.6,-2.9 4.3,-5.7 10.9,-16.4 4.8,-6 -54.4,19.4 -49,14.5 0,-15.7 -2.4,-20.5 -2.4,-20.5 l -9,-6.66 -4.3,0.6 z" />
            <path stroke="#000000" stroke-width="3" fill="none" d="M 31.27,104.32 C 20.73,168.58 79.08,197.79 79.081,197.79" />
            <path stroke="#000000" stroke-width="3" fill="none" d="M 47.76,111.46 C 39.9,158.01 83.42,179.17 83.42,179.17" />
            <path stroke="#000000" stroke-width="3" fill="none" d="M 156.58,115.69 L 156.58,144.1" />',
    ),
  ),

)

?>
