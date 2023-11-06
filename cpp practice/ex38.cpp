#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a, i = 0;
    cout << "enter the no. " << endl;
    cin >> a;

    for (int i = 1; i < 11; i++)
    {
        cout << a << "x" << i << "=" << a * i << endl;
    }

    return 0;
}
