#include <cmath>
#include "Point.h"
#include <iostream>

using namespace std;

Point add(Point p1,Point p2){
    Point sum;
    sum.x = p1.x + p2.x;
    sum.y = p1.y + p2.y;
    return sum;
}

Point substract(Point p1,Point p2){
    Point sum;
    sum.x = p1.x - p2.x;
    sum.y = p1.y - p2.y;
    return sum;
}

float distance(Point p1, Point p2){
    float jarak;
    jarak = sqrt(((p1.x - p2.x)*(p1.x - p2.x)) + ((p1.y - p2.y)*(p1.y - p2.y)));
    return jarak;
}

float distance_to_origin(Point p){
    float jarak;
    jarak = sqrt((p.x*p.x)+(p.y*p.y));
    return jarak;
}

int quadrant(Point p){
    int kuadran;
    if ((p.x==0)||(p.y==0)){
        kuadran = 0;
    }else{
        if(p.x>0){
            if(p.y>0){
                kuadran = 1;
            }else{
                kuadran = 4;
            }
        }else{
            if(p.y>0){
                kuadran = 2;
            }else{
                kuadran = 3;
            }
        }
    }


    return kuadran;
}

bool is_equal(Point p1, Point p2){
    return ((p1.x==p2.x)&&(p1.y==p2.y));
}

bool is_origin(Point p){
    return ((p.x==0)&&(p.y==0));
}

void printPoint(Point p){
    cout << "(" << p.x << "," << p.y << ")" << endl;
}
