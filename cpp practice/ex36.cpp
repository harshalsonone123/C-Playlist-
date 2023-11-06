#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << fixed << setprecision(1);

    int i1 = 4, i2 = 8;
    cout << i1 / i2 << endl;
    cout << (double)i1 / i2 << endl;
    cout << i1 / (double)i2 << endl;
    cout << (double)(i1 / i2) << endl;

    double d1 = 5.6, d2 = 6.7;
    cout << d1 / d2 << endl;
    cout << (int)d1 / d2 << endl;
    cout << d1 / (int)d2 << endl;
    cout << (int)(d1 / d2) << endl;

    d1 = i1;
    cout << d1 << endl;
    i2 = d2;
    cout << i2 << endl;

    return 0;
}
