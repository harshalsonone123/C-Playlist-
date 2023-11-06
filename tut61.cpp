#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
    ofstream hout("sample60.txt");

    string name;
    cout << "enter your name ";
    cin >> name;

    hout << "my name is " + name;

    hout.close();
    return 0;
}
