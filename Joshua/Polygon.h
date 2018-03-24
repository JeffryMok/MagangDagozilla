#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>
#include "Point.h"

typedef struct Polygon {
    Point points[5];
    int count;
} Polygon;

Polygon makePolygon();
void addPoint(Point point, Polygon& polygon);
void delPoint(Polygon& polygon);
void printPolygon(Polygon polygon);

#endif
