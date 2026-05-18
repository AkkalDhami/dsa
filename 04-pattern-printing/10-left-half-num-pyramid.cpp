#include <iostream>

using namespace std;

/*

        1 
      2 2 
    3 3 3 
  4 4 4 4 
5 5 5 5 5 
 
 */

int main() {
    int n = 5;
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n - r; c++)
        {
            cout << "  ";
        }

        for (int c = 1; c <= r; c++)
        {
            cout << r << " ";
        }
        cout << endl;
    }
    

    return 0;
}