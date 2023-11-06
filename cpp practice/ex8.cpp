#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 234554765756;
    cout << "overflow of the above interger is " << x + 1 << endl;
    cout << "increase from its maximum value is " << x + 2 << endl;
    cout << "product of the above integer is " << x * x << endl;

    int y = -234554765756;
    cout << "underflow of the above interger is " << y - 1 << endl;
    cout << "increase from its minimum value is " << y - 2 << endl;
    cout << "product of the above integer is " << y * y << endl;
    return 0;
}
