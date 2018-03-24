#include <iostream>
#include "Polygon.h"
#include "Point.h"

using namespace std;

int main(){
    Polygon poly = makePolygon(4);

    Point p1, p2, p3;
    p1.x = 2;
    p1.y = 3;

    p2.x = 4;
    p2.y = 5;

    p3.x = 7;
    p3.y = 8;


    cout << "add p1 ";
    printPoint(p1);
    addPoint(p1, poly);
    cout << "current poly : " << endl;
    printPolygon(poly);

    cout << endl;

    cout << "add p2 ";
    printPoint(p2);
    addPoint(p2, poly);
    cout << "add p3 ";
    printPoint(p3);
    addPoint(p3, poly);
    cout << "current poly : " << endl;
    printPolygon(poly);

    cout << endl;

    cout << "delete point" << endl;
    delPoint(poly);
    cout << "current poly : " << endl;
    printPolygon(poly);

    deletePolygon(poly);


}
