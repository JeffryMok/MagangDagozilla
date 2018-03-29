#include <bits/stdc++.h>
using namespace std;

void swap (int &a, int &b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

int main () {
  int c = 3, d = 8;
  cout << c << " " << d << endl;
  swap (c, d);
  cout << c << " " << d << endl;

  return 0;
}
