#include "polygon.h"
#include <bits/stdc++.h>

using namespace std;

Polygon makePolygon (int size){
    Polygon poly;
    poly.count = 0;
    poly.points = (Point*)(malloc(size * (sizeof(Point))));
    return poly;
}


void addPoint (Point p, Polygon& poly) {
    int& i = poly.count;

    if (i<5) {
        poly.points[i] = p;
        ++i;
    } else {
        cout << "Penuh cok" << endl;
    }

}

void delPoint (Polygon& poly) {
    if (poly.count > 0) poly.count--;
}

void printPolygon (Polygon poly) {
    int jumlah = poly.count;

    for (int i=0; i<jumlah; ++i) {
        printPoint (poly.points[i]);
    }
}

void deletePolygon (Polygon& poly) {
    free(poly.points);
}

void copyPolygon (Polygon& src, Polygon& dst) {
    for (int i = 0; i<src.count; ++i) {
        dst.points[i] = src.points[i];
    }
}
