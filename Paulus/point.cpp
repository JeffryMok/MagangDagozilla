#include <iostream>
#include "point.h"

using namespace std;

Point add(Point p1, Point p2){
    Point p3;
    p3.x = p1.x + p2.x ;
    p3.y = p1.y + p2.y ;
    return p3;
    }
Point substract(Point p1, Point p2){
    Point p3;
    p3.x = p1.x - p2.x;
    p3.y = p1.y - p2.y;
    return p3;
    }
float distance(Point p1, Point p2){
    float jarak;
    return sqrt(pow((p1.x-p2.x),2) + pow((p1.y-p2.y),2));
    }
float distance_to_origin(Point p1){
    float jarakAsal;
    return sqrt(pow(p1.x,2) + pow(p1.y,2));
    }
int quadrant(Point p){
    if ((p.x > 0) and (p.y > 0)) 
       return 1;
    else if ((p.x < 0) and (p.y > 0)) 
       return 2;
    else if ((p.x < 0) and (p.y < 0)) 
       return 3;
    else if ((p.x > 0) and (p.y < 0))
       return 4;
    }             
bool is_equal(Point p1, Point p2){
    if ((p1.x = p2.x) and (p1.y = p2.y)) {
       return true; 
       }
    else {
       return false;
       }
    }
bool is_origin(Point p){
    if ((p.x = 0) and (p.y = 0)) {
       return true;
   }
    else {
       return false;
       }
}

void printPoint(Point p){
	cout << "(" << p.x << "," << p.y << ")" << endl;
}
