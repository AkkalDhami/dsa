#include <iostream>

using namespace std;

/*

5
5  4
5  4  3
5  4  3  2
5  4  3  2  1

 */

int main()
{
    for (int r = 5; r >= 1; r--)
    {
        for (int c = 5; c >= r; c--)
        {
            cout << c << "  ";
        }
        cout << endl;
    }

    return 0;
}