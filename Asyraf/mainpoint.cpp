#include <iostream>
#include "Point.h"

using namespace std;

int main() {
        Point a(9,4);
        Point b(8,3);

        float dist;

        cout << "Point a" << a << endl;
        cout << "Point b" << b << endl;
        cout << endl;

        cout << "Distance to b = "<< a.distance(b) << endl;
	cout << "Distance to (0.0) = " << a.distance_to_origin() << endl;
	cout << "Quadrant a = " << a.quadrant() << endl;
	cout << "a is equal b? " << a.is_equal(b) << endl;
	cout << "a is origin? " << a.is_origin() << endl;
        cout << endl;

        Point c = a+b;
        Point d = a-b;
        cout << "a + b = " << c << endl;
        cout << "a - b = " << d << endl;
        cout << endl;

        Point e(a);
        cout << "Point e = " << e << endl;

        e = b;
        cout << "Point e = " << e << endl;

        return 0;


}



