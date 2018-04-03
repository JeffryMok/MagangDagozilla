#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>

/*using namespace std;
typedef struct Point {
	int x;
	int y;
} Point;

Point add(Point p1, Point p2);
Point substract(Point p1, Point p2);
float distance(Point p1, Point p2);
float distance_to_origin(Point p1);
int quadrant(Point p);
bool is_equal(Point p1, Point p2);
bool is_origin(Point p);
void printPoint(Point p);
*/
class Point{
    private:
        int x;
        int y;

    public:
        point();
        point(int x, int y);

        Point add(Point p);
        Point substract(Point p);
        float distance(Point p);
        float distance_to_origin();
        int quadrant();
        bool is_equal(Point p1);
        bool is_origin();
        void print();
};
#endif
