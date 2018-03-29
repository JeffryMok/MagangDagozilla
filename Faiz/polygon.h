#ifndef POLYGON_H
#define POLYGON_H

#include "Point.h"

typedef struct Polygon {
  Point *points;
  int count;
} Polygon;

Polygon makePolygon (int size);
void addPoint (Point p, Polygon& poly);
void delPoint(Polygon& poly);
void printPolygon(Polygon poly);
void deletePolygon(Polygon& poly);
void copyPolygon(Polygon& src, Polygon& dst);

#endif
