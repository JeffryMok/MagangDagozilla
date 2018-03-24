//Point coy

#include "Point.h"


Point add(Point p1, Point p2){
	Point p3;
	p3.x = p1.x + p2.x;
	p3.y = p1.y + p2.y;
	return p3;
}

Point substract(Point p1, Point p2){
	Point p3;
	p3.x = p1.x - p2.x;
	p3.y = p1.y - p2.y;
	return p3;
}

float distance(Point p1, Point p2){
	return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

float distance_to_origin(Point p){
	return sqrt(pow(p.x, 2) + pow(p.y, 2))
}

int quadrant(Point p){
	
}

bool is_equal(Point p1, Point p2){
	
}

bool is_origin(Point p){
	
}
