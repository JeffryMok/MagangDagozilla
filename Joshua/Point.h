#ifndef POINT_H
#define POINT_H

typedef struct Point {
    int x;
    int y;
} Point;

Point add(Point p1, Point p2);
Point substract(Point p1, Point p2);
float distance(Point p1, Point p2);
float distance_to_origin(Point p);
int quadrant(Point p);
bool is_equal(Point p1,Point p2);
bool is_origin(Point p);

#endif
