#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Tell me your age" << endl;
    cin >> age;
    // if ((age < 18) && (age>0))
    // {
    //     cout << "you can't come the party" << endl;
    // }
    // else if (age == 18)
    // {
    //     cout << "you will get kid pass" << endl;
    // }
    // else
    // {
    //     cout << "you will get pass" << endl;
    // }
    switch (age)
    {
    case 18:
        cout << "you are 18" << endl;
        break;
    case 22:
        cout << "you are 22" << endl;
        break;
    case 2:
        cout << "you are 2" << endl;
        break;

    default:
        cout << "no special cases" << endl;
        break;
    }

    return 0;
}