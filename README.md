Drawshield draws shields based on their "blazon", or heraldic description. 

The project consists of three main parts 
  * a parser written in PHP which converts the blazon to an intermediate (XML) form; 
  * one or more backends, also PHP, which convert the intermediate form to a graphical representation (only SVG is provided at present);
  * and a set of Javascript tools which demonstrate shield drawing, create random blazons, teach blazonry and implement a blazonry quiz. 
  
Drawshield can faithfully reproduce very complex blazons such as "Gules, 
on a bend or between two escallops argent a Cornish chough proper between as many cinquefoils azure; 
and on a chief of the second a rose of the first seeded gold and barbed vert between two fleur-de-lis of the field".
