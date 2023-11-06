#include <iostream>
using namespace std;

class base1
{

public:
    void greet()
    {
        cout << "How are you" << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "kaise ho?" << endl;
    }
};

class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        base2::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "hello world" << endl;
    }
};

class D
{
    int a;

public:
    void say()
    {
        cout << "hello my beautiful people." << endl;
    }
};

int main(int argc, char const *argv[])
{
    // base1 base1obj;
    // base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // derived d;
    // d.greet();

    B b;
    b.say();
    D d;
    d.say();

    return 0;
}
