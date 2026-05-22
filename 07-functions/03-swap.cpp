#include <iostream>

using namespace std;

void swap(int a, int b){
    //? 1.
    // a = a + b;
    // b = a - b;
    // a = a - b;

    //? 2.
    // int t = a;
    // a = b;
    // b = t;
    // t = a;

    //? 3.
    // a = a ^ b;
    // b = a ^ b;
    // a = a ^ b;

    //? 4.
    a = b + a - (b = a);

    cout << "A: " << a << ", B: " << b << endl;
}

void swap(float a, float b){ //? function overloading
    float t = a;
    a = b;
    b = t;
    t = a;

    cout << "A: " << a << ", B: " << b << endl;
}

int main() {
    int x, y;
    cout << "Enter two no: ";
    cin >> x >> y;

    swap(x, y);

    float a = 1.2, b = 2.1;
    swap(a, b);

    return 0;
}