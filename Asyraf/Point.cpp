#include "Point.h"

Point add (Point p1, Point p2) {
Point p3;

p3.x = p1.x + p2.x;
p3.y = p1.x + p2.y;

return p3;
}

Point substract (Point p1, Point p2) {
Point p3;

p3.x = p1.x - p2.x;
p3.y = p1.x - p2.y;

return p3;
}

float distance (Point p1, Point p2) {
float dist;

dist = sqrt(pow(p1.x-p2.x, 2)+pow(p1.y-p2.y,2));

return dist;

}

float distance_to_origin(Point p) {
	return sqrt(pow(p.x,2) + pow(p.y,2));
}

int quadrant(Point p){
	if (p.x>0 && p.y>0) return 1;
	else if (p.x<0 && p.y>0) return 2;
	else if (p.x<0 && p.y<0) return 3;
	else if (p.x>0 && p.y<0) return 4;
	else return 0;
}

bool is_equal (Point p1, Point p2) {
	return (p1.x==p2.x && p1.y==p2.y);
}

bool is_origin (Point p) {
	return (p.x==0 && p.y==0);
}

