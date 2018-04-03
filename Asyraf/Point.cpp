#include "Point.h"
#include <iostream>

float Point::distance(Point& p) {
	return sqrt(pow(m_x-p.m_x, 2)+pow(m_y-p.m_y,2));
}

float Point::distance_to_origin() {	
	return sqrt(pow(m_x,2) + pow(m_y,2));
}

int Point::quadrant(){
	if (m_x>0 && m_y>0) return 1;
	else if (m_x<0 && m_y>0) return 2;
	else if (m_x<0 && m_y<0) return 3;
	else if (m_x>0 && m_y<0) return 4;
	else return 0;
}

bool Point::is_equal(Point& p) {
	return (m_x==p.m_x && m_y==p.m_y);
}

bool Point::is_origin() {
	return (m_x==0 && m_y==0);
}

Point operator+(Point& p1, Point& p2) {
	return Point(p1.m_x + p2.m_x, p1.m_y + p2.m_y);
}

Point operator-(Point& p1, Point& p2) {
	return Point(p1.m_x - p2.m_x, p1.m_y - p2.m_y);
}

ostream& operator<<(ostream& out, Point& p) {
	out << "(" << p.m_x << " , " << p.m_y <<")";

	return out;
}
