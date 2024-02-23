// Program to show explicit type casting in cpp.

#include <iostream>
#include <iomanip>  // included for setprecision() function.
using namespace std;

int main()
{
    int intVar = 10;
    float floatVar = 24.35;

    cout << "intVar = " << intVar << endl;
    cout << "floatVar = " << floatVar << endl;
    cout << "float(intVar) = " << fixed << setprecision(2) << float(intVar) << endl;
    cout << "int(floatVar)  = " << int(floatVar) << endl;

    return 0;
}