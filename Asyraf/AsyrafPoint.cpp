// Point coy
#include <iostream>
#include <cmath>

using namespace std;

typedef struct {
        int x;
        int y;
} Point;

Point add(Point p1, Point p2);
Point substract(Point p1, Point p2);
float distance(Point p1, Point p2);

int main() {
        Point a, b, padd, psubs;
	float dist;

        a.x=9;
        a.y=4;

	b.x=8;
	b.y=3;

        cout << a.x << " " << a.y <<endl;
	cout << distance(a, b) << endl;
        return 0;

}

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
float dst;

dst = sqrt(pow(p1.x-p2.x, 2)+pow(p1.y-p2.y,2));

return dst;

}


