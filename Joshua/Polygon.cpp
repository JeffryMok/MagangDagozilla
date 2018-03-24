#include "Polygon.h"
#include <iostream>

using namespace std;

Polygon makePolygon(int size){
    Polygon poly;
    // malloc return address of nothing
    // sedangkan kita butuh address of point, sehingga dicasting
    poly.count = 0;
    poly.points = (Point*)(malloc(size * (sizeof(Point))));
    return poly;
}


void addPoint(Point point, Polygon& polygon){
    int& indeks = polygon.count;

    if(indeks<5){
        polygon.points[indeks] = point;
        indeks++;
    }else{
        cout << "Penuh" <<endl;
    }

}

void delPoint(Polygon& polygon){
    if(polygon.count>0){
        polygon.count--;
    }
}

void printPolygon(Polygon polygon){
    int jumlah = polygon.count;

    for(int i = 0; i<jumlah;i++){
        printPoint(polygon.points[i]);
    }
}

void deletePolygon(Polygon& polygon){
    free(polygon.points); //tidak polygon karena polygon diatur compiler
}

void copyPolygon(Polygon& src, Polygon& dst){
    Polygon copy = makePolygon(src.count);
    for(int i = 0; i<src.count;i++){
        addPoint(src.points[i],copy);
    }
    dst = copy;

    //  dst = src;
}
