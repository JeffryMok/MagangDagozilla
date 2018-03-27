#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>

using namespace std;

class Point {
public:
    // CTOR CCTOR DTOR
    Point();
    Point(int _x, int _y);
    Point(const Point& point);
    ~Point();
    Point operator=(const Point& point);

    // GETTER SETTER
    int GetX();
    int GetY();
    void SetX(int _x);
    void SetY(int _y);

    // METHODS
    Point AddPoints(Point p1, Point p2);
    Point SubtractPoints(Point p1, Point p2);
    float Distance2Points(Point p1, Point p2);
    float DistanceToOrigin(Point point);
    void PrintPoint();

    // OPERATOR OVERLOAD
    Point operator+(const Point& point);
    Point operator-(const Point& point);

private:
    int x;
    int y;
};

#endif