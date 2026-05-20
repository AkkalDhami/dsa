#include <iostream>

using namespace std;

/*

        a
      b b
    c c c
  d d d d
e e e e e

 */

int main()
{
    int n = 5;
    char ch = 'a';
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n - r; c++)
        {
            cout << "  ";
        }

        for (char c = 1; c <= r; c++)
        {
            cout << ch << " ";
        }
        cout << endl;
        ch++;
    }

    return 0;
}