#include "point.h"

int main(){
   Point a;
   a.x = 9;
   a.y = 4;
   
   Point b;
   b.x = 3;
   b.y = 5;
   
   cout << a.x << " " << a.y << endl;
   cout << distance(a,b) << endl;
   return 0;
}
