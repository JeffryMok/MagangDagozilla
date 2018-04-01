#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>
#include "Point.h"

using namespace std;

class Polygon {
public:
	Point *m_points;
	int m_size;
	int m_count;
public:
	Polygon();
	Polygon(int size);
	Polygon(Polygon& p);

	void addPoint(Point& p);
	void delPoint();

	friend ostream& operator<<(ostream& out, Polygon& p);
	Polygon& operator=(Polygon& src);

	~Polygon();
};

#endif
