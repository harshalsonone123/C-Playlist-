#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_rollnumber(int);
    void get_rollnumber(void);
};

void student ::set_rollnumber(int r)
{
    roll_number = r;
}
void student ::get_rollnumber()
{
    cout << "the roll number is " << roll_number << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exam ::get_marks()
{
    cout << "the marks obtained in maths are: " << maths << endl;
    cout << "the marks obtained in physics are: " << physics << endl;
}

class result : public exam
{
    float percentage;

public:
    void display_results()
    {
        get_rollnumber();
        get_marks();
        cout << "your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main(int argc, char const *argv[])
{
    result harshal;
    harshal.set_rollnumber(420);
    harshal.set_marks(94.0, 90.0);
    harshal.display_results();
    return 0;
}
