#include <iostream>
#include "Polygon.h"

using namespace std;

int main(){
    Polygon poly = makePolygon();

    Point p1, p2, p3;
    p1.x = 2;
    p1.y = 3;

    p2.x = 4;
    p2.y = 5;

    p3.x = 7;
    p3.y = 8;



    addPoint(p1, poly);
    printPolygon(poly);
}
