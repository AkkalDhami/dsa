//? Day-02: May 15 2026

#include <iostream>

using namespace std;

int main()
{

    for (int r = 1; r <= 5; r++)
    {
        for (int c = 1; c <= 5; c++)
        {
            cout << r << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int r = 1; r <= 5; r++)
    {
        for (int c = 1; c <= 5; c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int r = 1; r <= 5; r++)
    {
        for (int c = 5; c >= 1; c--)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int r = 1; r <= 5; r++)
    {
        for (int c = 1; c <=  5; c++)
        {
            cout << c * c << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (char a = 'a'; a <= 'e'; a++)
    {
        for (int c = 1; c <=  5; c++)
        {
            cout << a << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int r = 1; r <= 5; r++)
    {
        for (char a = 'a'; a <= 'e'; a++)
        {
            cout << a << " ";
        }
        cout << endl;
    }

    cout << endl;

    int a = 1;

    for (int r = 1; r <= 5; r++)
    {
        for (int c = 1; c <= 5; c++)
        {
            cout << a << " ";
            a++;
        }
        cout << endl;
    }

    return 0;
}