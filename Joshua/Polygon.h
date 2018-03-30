#ifndef POLYGON_H
#define POLYGON_H

#include <iostream>
#include "Point.h"

class Polygon{
    private:
        Point *points;
        int count;
        int size;

    public:
        Polygon(); //default constructor
        Polygon(int size); //user0defined constructor
        Polygon(const Polygon& poly); //copy constructor
        ~Polygon(); //destructor

        void addPoint(Point point);
        void delPoint();
        void print();
        int getCount();
        int getSize();

};
#endif
