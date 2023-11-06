#include <iostream>
using namespace std;

class baseclass
{
public:
    int var_base;
    virtual void display()
    {
        cout << "1 Displaying base class variable var_base " << var_base << endl;
    }
};

class derivedclass : public baseclass
{
public:
    int var_derived;
    void display()
    {
        cout << "2 Displaying base class variable var_base " << var_base << endl;
        cout << "2 Displaying derived class variable var_derived " << var_derived << endl;
    }
};
int main(int argc, char const *argv[])
{
    baseclass *base_class_pointer;
    baseclass obj_base;
    derivedclass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}
