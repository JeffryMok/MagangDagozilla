#include <iostream>
#include "edtPolygon.h"
#include <vector>

using namespace std;

int main() {
	Polygon new_poly;

	Point p1;
	p1.x = 10;
	p1.y = 15;

	Point p2;
	p2.x = 5;
	p2.y = 5;

	Point p3;
	p3.x = 20;
	p3.y = 25;

	new_poly.addPoint(p1);
	new_poly.addPoint(p2);
	new_poly.addPoint(p3);

	new_poly.printPolygon();

	Polygon copy_poly;

	copyPolygon(new_poly, copy_poly);

	copy_poly.printPolygon();

	return 0;
}