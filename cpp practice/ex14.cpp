#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int r;
    float vol;
    cout << "the radius of the sphere : ";
    cin >> r;
    vol = 4 * 3.14 * r * r * r;
    cout << "the vol of sphere : " << vol << endl;
    return 0;
}
