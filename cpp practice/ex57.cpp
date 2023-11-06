#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
    float a, s;

    cout << "side of the hexagon is ";
    cin >> s;

    a = (6 * (s * s) / (4 * tan(M_PI / 6)));
    cout << "area is " << a << endl;
    return 0;
}
