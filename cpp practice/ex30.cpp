#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    float a, b, c, d;
    float sum, avg;
    sum = a + b + c + d;
    cout << "a: , b: , c: , d: ";
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cout << "the total of four numbers is " << sum << endl;
    avg = (a + b + c + d) / 4;
    cout << "the avg of four numbers is " << avg << endl;

    return 0;
}
