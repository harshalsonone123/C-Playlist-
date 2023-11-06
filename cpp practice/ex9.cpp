#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x = 5;

    cout << "the number is " << x << endl;
    x++; // post increment
    cout << "the post increment of the number is " << x << endl;
    ++x; // pre increment
    cout << "the pre increment of the number is " << x << endl;
    x--; // post decrement
    cout << "the post decrement of the number is " << x << endl;
    --x;
    cout << "the pre decrement of the number is " << x << endl;

    return 0;
}
