#include <iostream>
using namespace std;

template <class t1 = int, class t2 = float, class t3 = char>
class harshal
{
public:
    t1 a;
    t2 b;
    t3 c;
    harshal(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
    }
};

int main(int argc, char const *argv[])
{
    harshal<> h(4, 4.5, 'c');
    h.display();
    harshal<float, char, char> g(1.4, 'g', 'c');
    g.display();
    return 0;
}
