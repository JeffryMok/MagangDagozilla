#include <iostream>
#include "polygon.h"
#include "Point.h"

using namespace std;

int main(){
    Polygon poly = makePolygon(3);

    Point p1, p2, p3;
    p1.x = 45;
    p1.y = 7;

    p2.x = 8;
    p2.y = 4;

    p3.x = 6;
    p3.y = 9;

    printPoint(p1);
    addPoint(p1, poly);
    printPolygon(poly);
    cout << endl;
    printPoint(p2);
    addPoint(p2, poly);
    printPoint(p3);
    addPoint(p3, poly);
    printPolygon(poly);
    Polygon newPoly;
    copyPolygon(poly, newPoly);
    cout << endl;
    delPoint(poly);
    printPolygon(poly);

    cout << endl;


}
