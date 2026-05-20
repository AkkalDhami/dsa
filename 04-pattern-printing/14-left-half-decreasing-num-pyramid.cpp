#include <iostream>

using namespace std;

/*

        1
      2 1
    3 2 1
  4 3 2 1
5 4 3 2 1

 */

int main() {
    int n = 5;
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n - r; c++)
        {
            cout << "  ";
        }

        for (int c = r; c >= 1; c--)
        {
            cout << c << " ";
        }
        cout << endl;
    }
    

    return 0;
}