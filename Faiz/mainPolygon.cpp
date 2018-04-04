#include <iostream>
#include "polygon.h"
#include "Point.h"

using namespace std;


void cetakPoly(Polygon a){
    cout << "poligon sekarang : " << endl;
    a.print();
}

void cetakPoly(Polygon poly1, Polygon poly2){
    cout << "poligon 1 : " << endl;
    poly1.print();
    cout << "poligon 2 : " << endl;
    poly2.print();
}

int main(){
    Polygon poly1;

    Point p1(1,4);
    Point p2(3,2);
    Point p3(5,9);

    cout << "add p1 ";
    p1.print();
    poly1.addPoint(p1);
    cetakPoly(poly1);

    cout << endl;

    cout << "add p2 ";
    p2.print();
    poly1.addPoint(p2);
    cout << "add p3 ";
    p3.print();
    poly1.addPoint(p3);
    cetakPoly(poly1);

    cout << endl;

    cout << "delete point" << endl;
    poly1.delPoint();
    cout << "current poly : " << endl;
    cetakPoly(poly1);

    cout << endl;

    cout << "copying polygon" << endl;
    Polygon poly2(poly1);
    cetakPoly(poly1,poly2);

    cout << endl;

    cout << "delete point from poly2" << endl;
    poly2.delPoint();
    cetakPoly(poly1,poly2);

    cout << endl;

    Point p4(0,0);

    cout << "add p4 to poly2 ";
    p4.print();
    poly2.addPoint(p4);
    cetakPoly(poly1,poly2);

    cout << endl;

    cout << "add p3 to poly ";
    p3.print();
    poly1.addPoint(p3);
    cetakPoly(poly1,poly2);

    return 0;
}
