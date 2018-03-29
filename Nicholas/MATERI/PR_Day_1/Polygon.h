#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>
#include "Point.h"

using namespace std;

typedef struct Polygon {
    Point *points;
    int count;
} Polygon;

Polygon makePolygon(int size);
void addPoint(Point point, Polygon& polygon);
void delPoint(Polygon& polygon);
void printPolygon(Polygon polygon);
void deletePolygon(Polygon& polygon);

// PR
void copyPolygon(Polygon& src, Polygon& dst);
// src adalah polygon yang ingin dicopy, dst adalah polygon hasil copyan

#endif