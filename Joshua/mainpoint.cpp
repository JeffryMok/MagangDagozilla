#include <iostream>
#include "Point.h"

using namespace std;

int main(){
    Point a;
    a.x = 7;
    a.y = 5;

    Point b;
    b.x = 7;
    b.y = 5;

    float jarak = distance_to_origin(a);
    int kuadran = is_equal(a,b);
    cout<<kuadran<<endl;

    cout<<a.x<<" "<<a.y<<endl;
    cout<<jarak<<endl;

    return 0;
}
