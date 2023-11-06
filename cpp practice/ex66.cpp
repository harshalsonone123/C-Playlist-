#include <iostream>
using namespace std;

int add_1_to_given_number(int n)
{
    int total = 0;
    for (int x = 0; x <= n; x++)
    {
        total += x;
    }
    return total;
}

int main(int argc, char const *argv[])
{
    cout << "add 1 to 4 " << add_1_to_given_number(4) << endl;
    cout << "add 1 to 100 " << add_1_to_given_number(100) << endl;
    return 0;
}
