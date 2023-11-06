#include <iostream>
using namespace std;

template <class t>
class harshal
{
public:
    t data;
    harshal(t a)
    {
        data = a;
    }
    void display();
};

template <class t>
void harshal<t>::display()
{
    cout << data;
}

void func(t a)
{
    cout << "i am templatize function func()" << a << endl;
}

int main(int argc, char const *argv[])
{
    // harshal<char> h('c');
    // cout << h.data << endl;
    // h.display();

    func(4);
    return 0;
}
