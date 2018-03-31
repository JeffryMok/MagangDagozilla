#include <iostream>
#include "Polygon.h"
#include "Point.h"

using namespace std;


void cetakPoly(Polygon a){
    cout << "current poly : " << endl;
    a.print();
}

void cetakPoly(Polygon poly1, Polygon poly2){
    cout << "current poly : " << endl;
    poly1.print();
    cout << "current poly2 : " << endl;
    poly2.print();
}

int main(){
    Polygon poly1;

    Point p1(2,3);
    Point p2(4,5);
    Point p3(7,8);

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
    // cout << "copying polygon" << endl;
    // Polygon poly2(poly1);
    // cout << "current poly : " << endl;
    // poly1.print();
    // cout << "current poly2 : " << endl;
    // poly2.print();
    //
    // cout << endl;
    //
    //
    // cout << "delete point from poly2" << endl;
    // poly2.delPoint();
    // cout << "current poly2   : " << endl;
    // poly2.print();
    //
    // cout << endl;
    //
    // Point p4;
    // p4.x = 0;
    // p4.y = 0;
    //
    // cout << "add p4 to poly2 ";
    // printPoint(p4);
    // poly2.addPoint(p4);
    // cout << "current poly : " << endl;
    // poly1.print();
    // cout << "current poly2 : " << endl;
    // poly2.print();
    //
    // cout << endl;

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
