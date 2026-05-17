#include <iostream>

using namespace std;

/*

a
b  b
c  c  c
d  d  d  d
e  e  e  e  e

 */

int main()
{
    char ch = 'a';
    for (int r = 1; r <= 5; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << ch << "  ";
        }
        cout << endl;
        ch ++;
    }

    return 0;
}