#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a integer: ";
    cin >> num; //* '>>' => extraction operator
    
    double num2;
    cout << "Enter a double: ";
    cin >> num2;

    /** 
     * ? implicit type casting: int -> double
     
     * ? No data loss
     * ? done automatically 
     * 
    */

    double num3 = num;
    cout << "The double is: " << num3 << endl;

    /** 
    * ? explicit type casting: double -> int
    * * may cause data loss
    */
   
    int num4 = (int)num2;
    int num5 = static_cast<int>(num2);

    cout << "The integer is: " << num4 << endl;
    cout << "The integer is: " << num5 << endl;

    return 0;
}