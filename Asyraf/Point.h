#ifndef POINT_H
#define POINT_H

#include <cmath>
#include <iostream>

using namespace std;

class Point{
	int m_x;
	int m_y;
public:
	Point() {m_x = 0; m_y = 0;};
	Point(int x, int y) {m_x = x; m_y = y;}; 
	
	int get_x() {return m_x;};
	int get_y() {return m_y;};

	float distance(Point& p);
	float  distance_to_origin();
	int quadrant();
	bool is_equal(Point& p1);
	bool is_origin();

	friend Point operator+(Point& p1, Point& p2);
	friend Point operator-(Point& p1, Point& p2);
	friend ostream& operator<<(ostream& out, Point& p);
};

#endif
