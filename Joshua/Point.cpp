#include <cmath>
#include "Point.h"
#include <iostream>

using namespace std;

Point::Point(){
    x = 0;
    y = 0;
}

Point::Point(int x, int y){
    this->x = x;
    this->y = y;
}

Point Point::add(Point p){
    Point sum;
    sum.x = p.x + x;
    sum.y = p.y + y;
    return sum;
}

Point Point::substract(Point p){
    Point hasil;
    hasil.x = x - p.x;
    hasil.y = y - p.y;
    return hasil;
}

float Point::distance(Point p){
    float jarak;
    jarak = sqrt(((p.x - x)*(p.x -x)) + ((p.y - y)*(p.y - y)));
    return jarak;
}

float Point::distance_to_origin(){
    float jarak;
    jarak = sqrt((x*x)+(y*y));
    return jarak;
}

int Point::quadrant(){
    int kuadran;
    if ((x==0)||(y==0)){
        kuadran = 0;
    }else{
        if(x>0){
            if(y>0){
                kuadran = 1;
            }else{
                kuadran = 4;
            }
        }else{
            if(y>0){
                kuadran = 2;
            }else{
                kuadran = 3;
            }
        }
    }


    return kuadran;
}

bool Point::is_equal(Point p){
    return ((x==p.x)&&(y==p.y));
}

bool Point::is_origin(){
    return ((x==0)&&(y==0));
}

void Point::print(){
    cout << "(" << x << "," << y << ")" << endl;
}
