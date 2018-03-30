#ifndef EDTPOLYGON_H
#define EDTPOLYGON_H

#include "Point.h"
#include <iostream>
#include <vector>

using namespace std;

class Polygon {
	vector <Point> points;

public:
	void addPoint (Point& point);
	void delPoint ();
	vector <Point> getPolygon();
	int getPolygonSize ();
	void printPolygon ();
};

void copyPolygon (Polygon& src, Polygon& dst);

#endif