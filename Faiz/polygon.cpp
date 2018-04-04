#include "polygon.h"
#include <bits/stdc++.h>

using namespace std;

Polygon::Polygon(){
  this->size = 5;
  this->count = 0;
  this->points = new Point[this->size];
}

Polygon::Polygon(int size){
    this->size = size;
    this->count = 0;
    this->points =  new Point[this->size];
}

Polygon::Polygon(const Polygon& poly){
    this->size = poly.size;
    this->count = 0;
    this->points =  new Point[this->size];
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
        cout << "Sudah tidak muat" << endl;
    }
}

void Polygon::delPoint(){
    if(this->count>0){
        this->count--;
    }
}

void Polygon::print(){
    for(int i = 0; i<this->count;++i){
        this->points[i].print();
    }
}

int Polygon::getCount(){
    return this->count;
}

int Polygon::getSize(){
    return this->size;
}
