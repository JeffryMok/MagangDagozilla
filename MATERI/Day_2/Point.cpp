#include "Point.hpp"

// CTOR CCTOR DTOR
Point::Point() {
    this->x = 0;
    this->y = 0;
}

Point::Point(int _x, int _y) {
    x = _x;
    y = _y;
}

Point::Point(const Point& point) {
    x = point.x;
    y = point.y;
}

Point::~Point() {
    // NOT NEEDED
    // Kenapa?
}

Point Point::operator=(const Point& point) {
    if (this != &point) {
        x = point.x;
        y = point.y;
    }
    return *this;
}

// GETTER SETTER
int Point::GetX() {
    return x;
}

int Point::GetY() {
    return y;
}

void Point::SetX(int _x) {
    x = _x;
}

void Point::SetY(int _y) {
    y = _y;
}

// METHODS
Point Point::AddPoints(Point p1, Point p2) {
    int new_x = p1.x + p2.x;
    int new_y = p1.y + p2.y;
    
    Point result(new_x, new_y);
    
    return result;
}

Point Point::SubtractPoints(Point p1, Point p2) {
    return Point(p1.x - p2.x, p1.y - p2.y);
    // Sebenernya sama seperti yang atas, tapi kalo gini juga boleh
}

float Point::Distance2Points(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

float Point::DistanceToOrigin(Point point) {
    return sqrt(pow(point.x, 2) + pow(point.y, 2));
}

void Point::PrintPoint() {
    cout << "(" << x << ", " << y << ")" << endl;
}

// OPERATOR OVERLOAD
Point Point::operator+(const Point& point) {
    return Point(x + point.x, y + point.y);
}

Point Point::operator-(const Point& point) {
    return Point(x - point.x, y - point.y);
}