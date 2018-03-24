// Point coy
#include <iostream>
#include <cmath>

using namespace std;
typedef struct Point {
	int x;
	int y;
} Point;

Point add(Point p1, Point p2);
Point substract(Point p1, Point p2);
float distance(Point p1, Point p2);

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

int main(){
	Point a;
	a.x = 9;
	a.y = 4;
	
	Point b;
	b.x = 4;
	b.y = 1;
	
	cout << a.x << " " << a.y << endl;
	cout << distance(a, b) << endl;
	return 0;
}

