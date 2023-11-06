#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int num)
    {
        a = num;
    }
    number(number &obj)
    {
        cout << "copy constructors called: " << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "the number of the object is " << a << endl;
    }
};

int main(int argc, char const *argv[])
{
    number x, y, z(45);
    x.display();
    y.display();
    z.display();

    number z1(x);
    z1.display();

    z2 = z;

    number z3 = z;
    return 0;
}
