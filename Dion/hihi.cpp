#include <iostream>

using namespace std;

void swap(int& a, int& b);

void swap(int& a, int& b) {
    int temp;
    temp = b;
    b = a;
    a = temp;
}

int main() {
    int p, q;
    
    p = 4;
    q = 7;

    cout << "p: " << p << ", q: " << q << endl;

    swap(p, q);

    cout << "p: " << p << ", q: " << q << endl;

    return 0;
}