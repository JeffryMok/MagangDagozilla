#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>
#include "point.h"
#include <stdlib.h>

using namespace std;

typedef struct Polygon{
  Point *points;
  int count;

} Polygon;

Polygon makePolygon(int size);
void addPoint(Point point, Polygon& polygon);
void delPoint(Polygon& polygon);
void printPolygon(Polygon polygon);
void deletePolygon(Polygon& polygon);

// PR
void copyPolygon(Polygon& a, Polygon& b);
// src adalah polygon yang ingin dicopy, dst adalah polygon hasil copyan


#endif
