#ifndef POLYGON_H
#define POLYGON_H
#include <iostream>
#include "Point.h"

class Polygon {
private:
  Point *points;
  int count;
  int size;

public:
Polygon();
Polygon(int size);
Polygon(const Polygon& poly);
~Polygon();

void addPoint (Point p);
void delPoint();
void printPolygon();
int getCount();
int getSize();
};

#endif
