#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>
#include "Point.h"

typedef struct Polygon {
    Point *points;
    int count;
} Polygon;

Polygon makePolygon(int size);
void addPoint(Point point, Polygon& polygon);
void delPoint(Polygon& polygon);
void printPolygon(Polygon polygon);
void deletePolygon(Polygon& polygon);

#endif
