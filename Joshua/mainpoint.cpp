#include <iostream>
#include "Point.h"

using namespace std;

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
