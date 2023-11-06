#include <iostream>
using namespace std;

class base
{
protected:
    int a;

private:
    int b;
};

class derived : protected base
{
};
int main(int argc, char const *argv[])
{
    base b;
    derived b;
    cout << b.a;
    return 0;
}
