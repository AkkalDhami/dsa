#include <iostream>

using namespace std;

int main() {
    int a = 5;

    //? even or odd
    if(a & 1) {
        cout << "Odd" << endl;
    } else {
        cout << "Even" << endl;
    }

    int x = 5, y = 3;
    cout << "X: " << x << ", Y: " << y << endl;
    
    //? swap x and y
    
    x = x ^ y; //? x = 6
    y = x ^ y; //? y = 5
    x = x ^ y; //? x = 3

    cout << "X: " << x << ", Y: " << y << endl;

    return 0;
}