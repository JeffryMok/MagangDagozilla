#include "polygon.h"
#include <iostream>

using namespace std;

Polygon makePolygon(int size) {
	Polygon polygon;
	polygon.points = (Point *)malloc(size * sizeof(Point));
	polygon.count = 0;
	return polygon;
}

void addPoint(Point point, Polygon& polygon){
     if(polygon.count < 5) {
     polygon.points[polygon.count] = point;
     polygon.count++;
     }
     else
       cout << "Penuh" << endl;
}
void delPoint(Polygon& polygon){
	if (polygon.count > 0)
	polygon.count --;
}
void printPolygon(Polygon polygon){
	for (int i = 0; i< polygon.count; i ++) {
		printPoint(polygon.points[i]);
	}
}
void deletePolygon(Polygon& polygon) {
	free(polygon.points);
}

void copyPollygon (Polygon& src, Polygon& dst) {
	dst = src;
}
