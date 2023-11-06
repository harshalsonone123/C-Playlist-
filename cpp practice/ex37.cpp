#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "the mystery series is " << endl;
    int x = 1;
    while (true)
    {
        ++x;
        if ((x % 3) == 0)
            continue;
        if (x == 50)
            break;
        if ((x % 2 == 0))
        {
            x += 3;
        }
        else
        {
            x -= 3;
        }
        cout << x << "";
    }
    cout << endl;

    return 0;
}
