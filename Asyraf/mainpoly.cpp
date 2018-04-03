#include <iostream>
#include "Polygon.h"

using namespace std;

int main() {
	Polygon new_poly;

	Point p1(10,15);
	Point p2(5,5);
	Point p3(20,25);

	new_poly.addPoint(p1);
	new_poly.addPoint(p2);
	new_poly.addPoint(p3);

	cout <<"new_poly = " << new_poly << endl;	

	Polygon copy_poly (new_poly);
	
	cout <<"copy_poly = " << copy_poly << endl << endl; 

	new_poly.delPoint();	

	cout << "new_poly = " << new_poly << endl;
	cout << "copy_poly = " << copy_poly <<endl; 

	copy_poly = new_poly;

	cout << "copy_poly = " << copy_poly <<endl; 

	return 0;
}
