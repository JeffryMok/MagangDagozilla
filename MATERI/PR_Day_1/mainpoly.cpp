#include <iostream>
#include "Polygon.h"

using namespace std;

int main() {
    Polygon new_poly;

    new_poly = makePolygon(5);

    Point p1;
    p1.x = 10;
    p1.y = 15;

    Point p2;
    p2.x = 5;
    p2.y = 5;

    addPoint(p1, new_poly);
    addPoint(p2, new_poly);

    cout << "new_poly:" << endl;
    printPolygon(new_poly);

    delPoint(new_poly);
    
    printPolygon(new_poly);

    Polygon another_poly;

    copyPolygon(new_poly, another_poly);

    cout << "another_poly:" << endl;
    printPolygon(another_poly);

    Point p3;
    p3.x = 20;
    p3.y = 5;

    addPoint(p3, another_poly);

    delPoint(new_poly);

    cout << "new_poly:" << endl;
    printPolygon(another_poly);

    cout << "another_poly:" << endl;
    printPolygon(another_poly);

    return 0;
}