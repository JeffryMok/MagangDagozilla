#include <iostream>
#include "Point.h"

using namespace std;

int main() {
        Point a, b;
        float dist;

        a.x=9;
        a.y=4;

        b.x=8;
        b.y=3;

        cout << a.x << " " << a.y <<endl;
	cout << add(a,b).x << endl;
	cout << substract(a,b).x << endl;
        cout << distance(a, b) << endl;
	cout << distance_to_origin(a) << endl;
	cout << quadrant(a) << endl;
	cout << quadrant(a) << endl;
	cout << is_equal(a,b) << endl;
	cout << is_origin(a) << endl;

        return 0;


}



