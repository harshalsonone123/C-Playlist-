#include <iostream>
#include <cmath>
using namespace std;

class simplecalculator
{
    int a, b;

public:
    void getdatasimple()
    {
        cout << "enter the value of a " << endl;
        cin >> a;
        cout << "enter the value of b " << endl;
        cin >> b;
    }

    void performoperationssimple()
    {
        cout << "the value of a+b is: " << a + b << endl;
        cout << "the value of a-b is: " << a - b << endl;
        cout << "the value of a*b is: " << a * b << endl;
        cout << "the value of a/b is: " << a / b << endl;
    }
};

class scientificcalculator
{
    int a, b;

public:
    void getdatascientific()
    {
        cout << "enter the value of a " << endl;
        cin >> a;
        cout << "enter the value of b " << endl;
        cin >> b;
    }

    void performoperationsscientific()
    {
        cout << "the value cos(a) is: " << cos(a) << endl;
        cout << "the value sin(a) is: " << sin(a) << endl;
        cout << "the value of exp(a) is: " << exp(a) << endl;
        cout << "the value of tan(a) is: " << tan(a) << endl;
    }
};

class hybridcalculator : public simplecalculator, public scientificcalculator
{
};

int main(int argc, char const *argv[])
{
    hybridcalculator calc;
    calc.getdatascientific();
    calc.performoperationsscientific();
    calc.getdatasimple();
    calc.performoperationssimple();

    return 0;
}
