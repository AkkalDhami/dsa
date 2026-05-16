#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{
    int n;
    cout << "Enter value of n: ";
    cin >> n;

    auto start = high_resolution_clock::now();

    
    cout << "Even numbers: " << endl;
    for (int i = 2; i <= n; i += 2)
    {
        cout << i << ", ";
    }
    
    auto end = high_resolution_clock::now();
    
    auto duration = duration_cast<milliseconds>(end - start);
    
    cout << "Execution time: " << duration.count() << " ms" << endl;
    
    //? i+=2 -> 255, 266, 257, 239, 249 => Avg. exec. time = 253.2 ms
    
    //? n % 2 == 0 -> 253, 249, 267, 248, 267 => Avg. exec. time = 256.8 ms
    return 0;
}
