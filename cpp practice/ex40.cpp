#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    char f[30], n[30];
    cout << "write your first name: ";
    cin >> f;
    cout << "write your last name: ";
    cin >> n;

    cout << "the reverse order of the name is " << n << " " << f << endl;
    return 0;
}
