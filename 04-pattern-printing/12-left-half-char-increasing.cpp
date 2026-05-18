#include <iostream>

using namespace std;

/*

        a
      a b
    a b c
  a b c d
a b c d e

 */

int main()
{
    int n = 5;
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n - r; c++)
        {
            cout << "  ";
        }

        char ch = 'a';
        for (char c = 1; c <= r; c++)
        {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }

    return 0;
}