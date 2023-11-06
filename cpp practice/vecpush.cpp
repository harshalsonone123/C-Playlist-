#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> myvector;
    int myint;

    cout << "please enter some integer " << endl;
    do
    {
        cin >> myint;
        myvector.push_back(myint);
    } while (myint);

    cout << "myvector stores " << int(myvector.size()) << "numbers " << endl;

    return 0;
}
