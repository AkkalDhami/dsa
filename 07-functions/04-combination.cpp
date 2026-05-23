#include <iostream>

using namespace std;

//? nCr = n! / (r! * (n - r)!)

int fact(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {

    int n;
    cout << "Enter value of n: ";
    cin >> n;

    int r;
    cout << "Enter value of r: ";
    cin >> r;

    int nCr = fact(n) / (fact(r) * fact(n - r));
    cout << n << "C" << r << " : " << nCr << endl;

    return 0;
}