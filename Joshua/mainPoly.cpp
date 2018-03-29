#include <iostream>
#include "Polygon.h"
#include "Point.h"

using namespace std;

int main(){
    Polygon poly1;
    //Polygon poly2(4);
    Polygon *poly3 = new Polygon(4);

    Point p1, p2, p3;
    p1.x = 2;
    p1.y = 3;

    p2.x = 4;
    p2.y = 5;

    p3.x = 7;
    p3.y = 8;


    cout << "add p1 ";
    printPoint(p1);
    poly1.addPoint(p1);
    cout << "current poly : " << endl;
    poly1.print();

    cout << endl;

    cout << "add p2 ";
    printPoint(p2);
    poly1.addPoint(p2);
    cout << "add p3 ";
    printPoint(p3);
    poly1.addPoint(p3);
    cout << "current poly : " << endl;
    poly1.print();

    // cout << endl;
    //
    // cout << "delete point" << endl;
    // delPoint(poly);
    // cout << "current poly : " << endl;
    // printPolygon(poly);
    //
    // cout << endl;
    //
    // Polygon poly2 = makePolygon(4);
    //
    cout << "copying polygon" << endl;
    Polygon poly2(poly1);
    cout << "current poly : " << endl;
    poly1.print();
    cout << "current poly2 : " << endl;
    poly2.print();

    cout << endl;


    cout << "delete point from poly2" << endl;
    poly2.delPoint();
    cout << "current poly2   : " << endl;
    poly2.print();

    cout << endl;

    Point p4;
    p4.x = 0;
    p4.y = 0;

    cout << "add p4 to poly2 ";
    printPoint(p4);
    poly2.addPoint(p4);
    cout << "current poly : " << endl;
    poly1.print();
    cout << "current poly2 : " << endl;
    poly2.print();

    cout << endl;

    //
    // cout << "add p3 to poly ";
    // printPoint(p3);
    // addPoint(p3, poly);
    // cout << "current poly : " << endl;
    // printPolygon(poly);
    // cout << "current poly2 : " << endl;
    // printPolygon(poly2);
    //
    // deletePolygon(poly);
    // deletePolygon(poly2);


}
