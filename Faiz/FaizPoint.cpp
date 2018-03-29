#include <bits/stdc++.h>
using namespace std;

typedef struct Point {
  int x,y;
} Point;

Point makePoint(int x, int y) {
  Point p;
  p.x = x;
  p.y = y;
  return p;
}

Point add (Point a, Point b) {
  Point sum;
  sum.x = a.x + b.x;
  sum.y = a.y + b.y;
  return sum;
}

Point substract (Point a, Point b) {
  Point sum;
  sum.x = a.x -b.x;
  sum.y = a.y -b.y;
  return sum;
}

float distance (Point a, Point b) {
  float jarak;
  jarak = sqrt(pow((a.x-b.x),2)+pow((a.y-b.y),2));
  return jarak;
}

float distance_to_origin (Point p) {
  float jarak;
  jarak = sqrt(pow(p.x,2)+pow(p.y,2));
  return jarak;
}

int quadrant (Point p) {
  if((p.x>0) && (p.y>0)) return 1;
  if((p.x<0) && (p.y>0)) return 2;
  if((p.x<0) && (p.y<0)) return 3;
  if((p.x>0) && (p.y<0)) return 4;
}

bool isEqual (Point a, Point b) {
  return ((a.x==b.x) &&  (a.y==b.y));
}

bool isOrigin (Point p) {
  return ((p.x==0) && (p.y==0));
}

void printPoint (Point p) {
  cout << "(" << p.x << ", " << p.y << ")"<< endl;
}

int main () {
  Point a,b;
  a.x = 3;
  a.y = 4;
  b.x = 6;
  b.y = 32;

  float jarak = distance(a,b);

  cout << jarak << endl;

  return 0;
}
