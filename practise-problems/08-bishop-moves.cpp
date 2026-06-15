#include <iostream>

using namespace std;

int solve(int A, int B)
{
    int total = 0;
    total += min(8 - A, 8 - B);
    total += min(8 - A, B - 1);
    total += min(A - 1, B - 1);
    total += min(A - 1, 8 - B);
    return total;
}

int main() {
    
    int A, B;
    cin >> A >> B;
    
    cout << solve(A, B) << endl;

    return 0;
}