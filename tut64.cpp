#include <iostream>
using namespace std;

template <class t>

class vector
{

public:
    t *arr;
    int size;

    vector(int m)
    {
        size = m;
        arr = new t[size];
    }
    t dotproduct(vector &v)
    {
        t d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * arr[i];
        }
        return d;
    }
};

int main(int argc, char const *argv[])
{
    vector<double> v1(3);
    v1.arr[0] = 4.4;
    v1.arr[1] = 34.32;
    v1.arr[2] = 14.32;

    vector<double> v2(3);
    v2.arr[0] = 423.43;
    v2.arr[1] = 3432.5;
    v2.arr[2] = 1432.7;
    double a = v1.dotproduct(v2);
    cout << a << endl;
    return 0;
}
