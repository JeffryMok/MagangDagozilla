#include "polygon.h"
#include <iostream>

using namespace std;

int main() {
   Polygon new_poly;
   Polygon dst;
   
   new_poly = makePolygon(5);
   dst = makePolygon(5);
   
   Point p1;
   p1.x = 10;
   p1.y = 15;
   
   Point p2;
   p2.x = 20;
   p2.y = 25;
   
   addPoint ( p1, new_poly);
   addPoint ( p2, new_poly);
   
   printPolygon(new_poly);
   
   copyPollygon(new_poly,dst);
   printPolygon(dst);
   
   delPoint (new_poly);
   
   printPolygon(new_poly);
   
   deletePolygon(new_poly);
   return 0;
}
