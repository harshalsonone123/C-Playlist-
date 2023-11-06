#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id" << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of the employee is " << id
             << " and this employee number " << count << endl;
    }
    static void getcount(void)
    {
        cout << "the value of count is " << count << endl;
    }
};

int employee::count;

int main()
{
    employee harshal, rohan, lavish;

    harshal.setdata();
    harshal.getdata();
    employee::getcount();

    rohan.setdata();
    rohan.getdata();
    employee::getcount();

    lavish.setdata();
    lavish.getdata();
    employee::getcount();

    return 0;
}