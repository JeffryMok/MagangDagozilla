#include <iostream>
#include "point.h"

using namespace std;

/*Point add(Point p1, Point p2){
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
*/
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

float Point::distance_to_origin(Point p){
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
