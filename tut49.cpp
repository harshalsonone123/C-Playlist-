#include <iostream>
using namespace std;

class test
{
    int a;
    int b;

public:
    test(int i, int j) : a(i), b(a + j)
    {
        cout << "constructor executed " << endl;
        cout << "value of a is " << a << endl;
        cout << "value of b is " << b << endl;
    }
};

int main(int argc, char const *argv[])
{
    test t(4, 6);

    return 0;
}
