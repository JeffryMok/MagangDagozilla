#ifndef POINT_H
#define POINT_H

class Point{
    private:
        int x;
        int y;

    public:
        Point();
        Point(int x, int y);

        Point add(Point p);
        Point substract(Point p);
        float distance(Point p);
        float distance_to_origin();
        int quadrant();
        bool is_equal(Point p);
        bool is_origin();
        void print();
};

#endif
