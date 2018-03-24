#include <iostream>

using namespace std;

int main() {

    int a;

    int arr[5];

    arr[0] = 12;

    cout << arr << endl;
    cout << *(arr + 0 * sizeof(int)) << endl;

    return 0;
}