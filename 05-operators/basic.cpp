#include <iostream>

using namespace std;

int main() {
    
    //? Operators:  
     
    //? 1. Arithmetic Operators: +, -, *, /, %
    //? 2. Relational Operators: ==, !=, >, <, >=, <=
    //? 3. Logical Operators: &&, ||
    //? 4. Bitwise Operators: &, |, ~, <<, >>
    //? 5. Assignment Operators: =, +=, -=, *=, /=, %=

    //* Arithmetic Operators
    int a = 5, b = 3;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;

    //* Relational Operators
    cout << "a == b = " << (a == b) << endl;
    cout << "a != b = " << (a != b) << endl;
    cout << "a > b = " << (a > b) << endl;
    cout << "a < b = " << (a < b) << endl;
    cout << "a >= b = " << (a >= b) << endl;
    cout << "a <= b = " << (a <= b) << endl;

    //* Logical Operators
    cout << "a && b = " << (a && b) << endl;
    cout << "a || b = " << (a || b) << endl;

    //* Bitwise Operators
    cout << "a & b = " << (a & b) << endl;
    cout << "a | b = " << (a | b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a << b = " << (a << b) << endl;
    cout << "a >> b = " << (a >> b) << endl;

    //* Assignment Operators
    cout << "a += b = " << (a += b) << endl;
    cout << "a -= b = " << (a -= b) << endl;
    cout << "a *= b = " << (a *= b) << endl;
    cout << "a /= b = " << (a /= b) << endl;
    cout << "a %= b = " << (a %= b) << endl;

    return 0;
}