#include "Polygon.h"
#include <iostream>

using namespace std;

Polygon makePolygon(){
    Polygon poly;
    poly.count = 0;
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

void delPoints(Polygon& polygon){
    if(polygon.count>0){
        polygon.count--;
    }
}

void printPolygon(Polygon polygon){
    int jumlah = polygon.count;
    cout << jumlah;

    for(int i = 0; i<jumlah;i++){
        printPoint(polygon.points[i]);
    }
}
