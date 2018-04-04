#include <bits/stdc++.h>
#include "Point.h"
using namespace std;

Point::Point(){
    x = 0;
    y = 0;
}

Point::Point(int x, int y){
    this->x = x;
    this->y = y;
}


Point Point::add(Point a) {
  Point sum;
  sum.x = a.x + x;
  sum.y = a.y + y;
  return sum;
}

Point Point::substract(Point a) {
  Point sum;
  sum.x = x -a.x;
  sum.y = y -a.y;
  return sum;
}

float Point::distance (Point a) {
  float jarak;
  jarak = sqrt(pow((a.x-x),2)+pow((a.y-y),2));
  return jarak;
}

float Point::distance_to_origin () {
  float jarak;
  jarak = sqrt(pow(x,2)+pow(y,2));
  return jarak;
}

int Point::quadrant () {
  int kuadran;
  if((x==0)||(y==0)) kuadran = 0;
  if((x>0) && (y>0)) kuadran = 1;
  if((x<0) && (y>0)) kuadran = 2;
  if((x<0) && (y<0)) kuadran = 3;
  if((x>0) && (y<0)) kuadran = 4;
  return kuadran;
}

bool Point::isEqual (Point a) {
  return ((a.x==x) &&  (a.y==y));
}

bool Point::isOrigin () {
  return ((x==0) && (y==0));
}

void Point::print() {
  cout << "(" << x << ", " << y << ")"<< endl;
}
