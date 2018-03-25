#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>
#include "Point.h"

using namespace std;

typedef struct Polygon{
	Point *points;
	int count;
}Polygon;

Polygon makePolygon(int size);
void addPoint (Point point, Polygon& polygon);
void delPoint (Polygon& Polygon);
void printPolygon(Polygon polygon);
void deletePolygon(Polygon& polygon);
void copyPolygon(Polygon& src, Polygon& dst);

#endif
