#include <iostream>
using namespace std;

int main()
{
    int *p = marks;
    cout << (*p++);
    cout << (*++p);

    return 0;
}
