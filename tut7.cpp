#include <iostream>

using namespace std;

int main()
{
    // int a, b, c;
    // cout << "enter the value of a: " << endl;
    // cin >> a;
    // cout << "enter the value of b: " << endl;
    // cin >> b;
    // c = a + b;
    // cout << "the sum is:" << c << endl;
    // cout << "the global c is : " << ::c;
    // float x = 455;
    // float &y = x;

    // cout << x << endl;
    // cout << y << endl;
    int a = 45, b = 78;

    cout << "the value of a is " << (float)a << endl;
    cout << "the value of a is " << float(a) << endl;

    cout << "the value of b is " << int(a) << endl;
    cout << "the value of b is " << int(a) << endl;
    int c = int(b);

    cout << "the expression is " << a + b << endl;
    cout << "the expression is " << a + int(b) << endl;
    cout << "the expression is " << a + (int)b << endl;
    return 0;
}