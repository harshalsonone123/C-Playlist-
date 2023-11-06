#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    string txt = "welcome, harshal ";
    cout << "the string is " << txt << endl;
    cout << "the length of the string: " << txt.length() << endl;
    cout << "the char at index 1 of the string:: " << txt.at(1) << endl;
    cout << "the char at index 1 of the string [using array]:: " << txt[1] << endl;
    cout << "is the string empty:: " << txt.empty() << endl;
    cout << "retrive the sub string from 3rd position for 4th character " << txt.substr(3, 4) << endl;
    cout << "the substring replace by 'went' " << txt.append("went") << endl;
    cout << "append the string 'end' and at last of the string:: " << txt.append("end") << endl;
    cout << "the string 'insert' inserting at 3rd position of the string:: " << txt.insert(3, "insert") << endl;

    string txt1;
    txt1 = txt;
    cout << "the new string is :: " << txt1 << endl;

    cout << "input a sentence:: ";
    getline(cin, txt);
    cout << txt << endl
         << endl;

    return 0;
}
