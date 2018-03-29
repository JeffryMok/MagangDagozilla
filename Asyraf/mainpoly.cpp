#include <iostream>
#include "Polygon.h"

using namespace std;

int main() {
	Polygon new_poly;

	new_poly = makePolygon(5);

	Point p1;
	p1.x = 10;
	p1.y = 15;

	Point p2;
	p2.x = 5;
	p2.y = 5;

	Point p3;
	p3.x = 20;
	p3.y = 25;

	addPoint(p1, new_poly);
	addPoint(p2, new_poly);
	addPoint(p3, new_poly);

	printPolygon(new_poly);	

	Polygon copy_poly = makePolygon(5);

	copyPolygon(new_poly, copy_poly);
	
	printPolygon(copy_poly);

	delPoint(new_poly);	

	printPolygon(new_poly);
	printPolygon(copy_poly);

	deletePolygon(new_poly);
	deletePolygon(copy_poly);


	return 0;
}
