#include <iostream>
#include <cmath>

using namespace std;

typedef struct Point {
    int x;
    int y;
} Point;

Point add(Point p1, Point p2);
Point substract(Point p1, Point p2);
float distance(Point p1, Point p2);


Point add(Point p1,Point p2){
    Point sum;
    sum.x = p1.x + p2.x;
    sum.y = p1.y + p2.y;
    return sum;
}

Point substract(Point p1,Point p2){
    Point sum;
    sum.x = p1.x - p2.x;
    sum.y = p1.y - p2.y;
    return sum;
}

float distance(Point p1, Point p2){
    float jarak;
    jarak = sqrt(((p1.x - p2.x)*(p1.x - p2.x)) + ((p1.y - p2.y)*(p1.y - p2.y)));
    return jarak;
}



int main(){
    Point a;
    a.x = 3;
    a.y = 5;

    Point b;
    b.x = 7;
    b.x = 5;

    float jarak = distance(a,b);

    cout<<a.x<<" "<<a.y<<endl;
    cout<<jarak<<endl;

    return 0;
}
