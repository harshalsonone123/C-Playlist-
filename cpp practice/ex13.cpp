#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "lets swap the numbers " << endl;
    int x, y, temp;
    cout << "input of first number is " << endl;
    cin >> x;
    cout << "input of second number is " << endl;
    cin >> y;
    temp = x;
    x = y;
    y = temp;
    cout << "after swaping the first number is : " << x << endl;
    cout << "after swaping the second number is : " << y << endl;

    return 0;
}
