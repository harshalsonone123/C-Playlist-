#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int p, r, t, i;
    cout << "write the principle ";
    cin >> p;
    cout << "write the rate of interest ";
    cin >> r;
    cout << "write the time taken ";
    cin >> t;

    i = (p * r * t) / 100;

    cout << "the simple interest for amount " << p << "for " << t << "years @ " << r << "% is " << i;

    return 0;
}
