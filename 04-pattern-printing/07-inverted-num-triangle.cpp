#include <iostream>

using namespace std;

/*

1  2  3  4  5  
1  2  3  4  
1  2  3  
1  2  
1  

 */

int main()
{
    for (int r = 5; r >= 1; r--)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << c << "  ";
        }
        cout << endl;
    }

    return 0;
}