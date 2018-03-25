#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>
#include "point.h"
using namespace std;

typedef struct Polygon {
	Point *points;
	int count;
}Polygon;

Polygon makePolygon (int size);
void addPoint(Point point, Polygon& polygon);
void delPoint(Polygon& polygon);
void printPolygon(Polygon polygon);
void deletePolygon(Polygon& polygon);

//PR
void copyPollygon(Polygon& src, Polygon& dst);

#endif
