#include <iostream>
using namespace std;

template <class t1, class t2>
class myclass
{
public:
    t1 data1;
    t2 data2;
    myclass(t1 a, t2 b)
    {
        data1 = a;
        data2 = b;
    }

    void display()
    {
        cout << this->data1 << endl
             << this->data2;
    }
};

int main(int argc, char const *argv[])
{
    myclass<char, float> obj('C', 1.8);
    obj.display();
    return 0;
}
