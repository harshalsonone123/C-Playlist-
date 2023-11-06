#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    string text;
    getline(cin, text);
    transform(text.begin(), text.end(), text.begin(), ::toupper);
    cout << text << endl;
    return 0;
}
