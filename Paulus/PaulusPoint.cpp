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
	Point sum;
	sum.x = p1.x + p2.x;
	sum.y = p1.y + p2.y;
	return sum;
}
Point substract(Point p1, Point p2){
	Point sum;
	sum.x = p1.x - p2.x;
	sum.y = p1.y - p2.y;
	return sum;
}
float distance(Point p1, Point p2){
	Point jarak;
	return sqrt(pow((p2.x - p1.x),2) + pow((p2.y - p1.y),2));
}

int main(){
   Point a;
   a.x = 9;
   a.y = 4;
   
   Point b;
   b.x = 3;
   b.y = 5;
   
   cout << a.x << " " << a.y << endl;
   cout << distance(a,b) << endl;
   return 0;
}
