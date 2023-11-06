#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i1 = 1, i2 = 2;
    double d1 = 3, d2 = 4;

    cout << "" << i1 << "+" << i2 << "=" << i1 + i2 << endl;
    cout << "" << d1 << "+" << d2 << "=" << d1 + d2 << endl;
    cout << "" << i1 << "+" << d2 << "=" << i1 + d2 << endl;

    cout << "" << i1 << "-" << i2 << "=" << i1 - i2 << endl;
    cout << "" << d1 << "-" << d2 << "=" << d1 - d2 << endl;
    cout << "" << i1 << "-" << d2 << "=" << i1 - d2 << endl;

    cout << "" << i1 << "*" << i2 << "=" << i1 * i2 << endl;
    cout << "" << d1 << "*" << d2 << "=" << d1 * d2 << endl;
    cout << "" << i1 << "*" << d2 << "=" << i1 * d2 << endl;

    cout << "" << i1 << "/" << i2 << "=" << i1 / i2 << endl;
    cout << "" << d1 << "/" << d2 << "=" << d1 / d2 << endl;
    cout << "" << i1 << "/" << d2 << "=" << i1 / d2 << endl;

    return 0;
}
