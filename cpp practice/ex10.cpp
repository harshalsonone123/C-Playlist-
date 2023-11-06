#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    double pi = 3.141519265;
    cout << fixed << setprecision(4);
    cout << "the value of pi 4 decimal place of total width 8 : | " << setw(8) << pi << '| ' << endl;
    cout << "the value of pi 4 decimal place of total width 10 : | " << setw(10) << pi << '| ' << endl;

    cout << setfill('-');
    cout << "the value of pi 4 decimal place of total width 8 : | " << setw(8) << pi << '| ' << endl;
    cout << "the value of pi 4 decimal place of total width 10 : | " << setw(10) << pi << '| ' << endl;

    cout << scientific;
    cout << "The value of pi in scientific is : " << pi << endl;
    cout << "the value of the pi in scientific format is : " << pi << endl;

    bool done = false;
    cout << "status in the number : " << done << endl;
    cout << boolalpha;
    cout << "status in alphabets : " << done << endl;

    return 0;
}
