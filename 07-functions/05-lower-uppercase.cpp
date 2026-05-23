#include <iostream>

using namespace std;

char toUpper(char ch) {
    int a = ch; //? a -> 97, A -> 65(97 - 32)
    return char(a - 32);
}

int main() {
    char ch;
    cout << "Enter lowercase char: ";
    cin >> ch;

    cout << toUpper(ch) << endl;

    return 0;
}