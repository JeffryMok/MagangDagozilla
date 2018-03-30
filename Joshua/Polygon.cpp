#include "Polygon.h"
#include <iostream>

using namespace std;

Polygon::Polygon(){
    this->size = 5;
    this->count = 0;
    this->points = new Point[this->size];
}

Polygon::Polygon(int size){
    // malloc return address of nothing
    // sedangkan kita butuh address of point, sehingga dicasting
    this->size = size;
    this->count = 0;
    this->points =  new Point[this->size];
}

Polygon::Polygon(const Polygon& poly){
    this->size = poly.size;
    this->count = poly.count;
    for(int i = 0; i<poly.count;i++){
        addPoint(poly.points[i]);
    }
}

Polygon::~Polygon(){
    delete [] this->points;
}

void Polygon::addPoint(Point point){
    if(this->count<this->size){
        this->points[this->count] = point;
        this->count++;
    }else{
        cout << "Penuh" <<endl;
    }
}

void Polygon::delPoint(){
    if(this->count>0){
        this->count--;
    }
}

void Polygon::print(){
    for(int i = 0; i<this->count;i++){
        printPoint(this->points[i]);
    }
}

int Polygon::getCount(){
    return count;
}

int Polygon::getSize(){
    return size;
}
