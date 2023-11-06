#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    signed long x = 0;

    cout << "enter the number: ";
    cin >> x;

    if (x > 0)
    {
        cout << "positive number" << endl;
    }
    else if (x < 0)
    {
        cout << "negative number" << endl;
    }
    else
    {
        cout << "the number is zero";
    }
    return 0;
}
