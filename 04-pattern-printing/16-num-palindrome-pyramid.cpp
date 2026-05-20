#include <iostream>

using namespace std;

/*
       1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

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

        for (int c = 1; c <= r; c++)
        {
            cout << c << " ";
        }
        for (int c = r - 1; c >= 1; c--)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}