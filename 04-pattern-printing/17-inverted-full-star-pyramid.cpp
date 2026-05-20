#include <iostream>

using namespace std;

/*

* * * * * * * * * 
  * * * * * * * 
    * * * * * 
      * * * 
        * 
*/

int main()
{
    int n = 5;
    for (int r = n; r >= 1; r--)
    {
        for (int c = 1; c <= n - r; c++)
        {
            cout << "  ";
        }

        for (int c = 1; c <= 2 * r - 1; c++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}