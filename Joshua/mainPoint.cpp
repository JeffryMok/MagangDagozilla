#include <iostream>
#include "Point.h"

using namespace std;

int main(){

    Point a(7,5);
    cout<<"a = ";
    a.print();

    Point b(-1,1);
    cout<<"b = ";
    b.print();

    cout<<endl;
    cout<<"Testing start"<<endl;

    cout<<"Testing add"<<endl;
    cout<<"c = a.add(b)"<<endl;
    Point c;
    c = a.add(b);
    cout<<"c = ";
    c.print();
    cout<<endl;

    cout<<"Testing substract"<<endl;
    cout<<"c = a.substract(b)"<<endl;
    c = a.substract(b);
    cout<<"c = ";
    c.print();
    cout<<endl;

    cout<<"Testing distance"<<endl;
    cout<<"a.distance(b) = "<<a.distance(b)<<endl;
    cout<<endl;

    cout<<"Testing distance_to_origin"<<endl;
    cout<<"a.distance_to_origin() = "<<a.distance_to_origin()<<endl;
    cout<<endl;

    cout<<"Testing qudarant"<<endl;
    cout<<"a.quadrant() = "<<a.quadrant()<<endl;
    cout<<"b.qudarant() = "<<b.quadrant()<<endl;
    cout<<endl;

    cout<<"Testing is_equal"<<endl;
    cout<<"a.is_equal(b) = "<<a.is_equal(b)<<endl;
    cout<<"a.is_equal(a) = "<<a.is_equal(a)<<endl;
    cout<<endl;

    cout<<"Testing is_origin"<<endl;
    cout<<"a.is_origin() = "<<a.is_origin()<<endl;
    cout<<"d = (0,0)"<<endl;
    Point d(0,0);
    cout<<"d.is_origin() = "<<d.is_origin()<<endl;
    cout<<endl;

    cout<<"Finish testing"<<endl;

    return 0;
}
