#include <iostream>
using namespace std;

class employee
{

public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    employee();
};

class programmer : employee
{
public:
    int languagecode = 9;
    programmer(int inpid)
    {
        id = inpid;
    }
    void getdata()
    {
        cout << id << endl;
    }
};

int main(int argc, char const *argv[])
{
    employee harshal(1), rohan(2);
    cout << harshal.salary << endl;
    cout << rohan.salary << endl;
    programmer skillf(1);
    cout << skillf.languagecode << endl;
    skillf.getdata();
    return 0;
}
