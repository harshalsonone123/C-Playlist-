#include <iostream>
#include <map>
#include <string>

// Here is the project of cpp to check the account balance of particular candidate

using namespace std;

int main(int argc, char const *argv[])
{
    map<string, int> balancemap;
    cout << "Note the balance is in RS. " << endl;
    balancemap["Harshal"] = 10109210;
    balancemap["Swarnim"] = 45213213;
    balancemap["Shobhit"] = 67231231;

    balancemap.insert({{"Anjali", 169132123}, {"Palak", 187123123}});

    map<string, int>::iterator iter;
    for (iter = balancemap.begin(); iter != balancemap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    cout << "The size is : " << balancemap.size() << endl;
    cout << "The max size is : " << balancemap.max_size() << endl;
    cout << "The empty's return values : " << balancemap.empty() << endl;

    return 0;
}
