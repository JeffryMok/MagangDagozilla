#include "Polygon.h"
#include <iostream>
#include <stdlib.h>

Polygon makePolygon(int size) {
	Polygon polygon;
	polygon.points = (Point *) malloc(size * sizeof(Point));
	polygon.count = 0;
	return polygon;
}

void addPoint (Point point, Polygon& polygon) {
	if (polygon.count < 5) {
		polygon.points[polygon.count] = point;
		polygon.count ++;
		}
	else cout << "Penuh bro" << endl;
} 

void delPoint (Polygon& polygon) {
	if (polygon.count>0)
	polygon.count --; 
}

void printPolygon(Polygon polygon) {
	for (int i=0; i<polygon.count; i++)
	{ 
		printPoint(polygon.points[i]);
	}
	cout << endl;
}

void deletePolygon(Polygon& polygon) {
	free(polygon.points);
}

Polygon copyPolygon(Polygon polygon) {
	Polygon poly;
	poly = makePolygon(polygon.count);
	for (int i=0; i<polygon.count; i++)
	{
		poly.points[i] = polygon.points[i];
		poly.count++;
	}

	return poly;
}