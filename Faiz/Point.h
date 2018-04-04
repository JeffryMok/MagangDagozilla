#ifndef POINT_H
#define POINT_H

class Point{
    private:
        int x, y;

    public:
        Point();
        Point(int x, int y);

        Point add(Point p);
        Point substract(Point p);
        float distance(Point p);
        float distance_to_origin();
        int quadrant();
        bool isEqual(Point p);
        bool isOrigin();
        void print();
};
#endif
