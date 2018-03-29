#include "edtPolygon.h"
#include <iostream>
#include <vector>

using namespace std;

void Polygon::addPoint (Point& point) {
	points.push_back(point);
}

void Polygon::delPoint() {
	points.pop_back();
}

vector <Point> Polygon::getPolygon() {
	return points;
}

int Polygon::getPolygonSize() {
	return points.size();
} 

void Polygon::printPolygon() {
	for (int i=0; i<points.size(); i++)
	{
		printPoint(points[i]);
	}
	cout << endl;
}

void copyPolygon (Polygon& src, Polygon& dst) {
	vector <Point> temp = src.getPolygon();
	for (int i=0; i<src.getPolygonSize(); i++)
	{
		dst.addPoint(temp[i]);
	}
}

