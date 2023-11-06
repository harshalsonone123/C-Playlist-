#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    time_t t = time(NULL);
    tm *p = localtime(&t);

    cout << "seconds: " << (p->tm_sec) << endl;
    cout << "minutes: " << (p->tm_min) << endl;
    cout << "hours: " << (p->tm_hour) << endl;
    cout << "day of month: " << (p->tm_mday) << endl;
    cout << "month of the year: " << (p->tm_mon) + 1 << endl;
    cout << "year: " << (p->tm_year) + 1900 << endl;
    cout << "weekday: " << (p->tm_wday) << endl;
    cout << "day of the year: " << (p->tm_yday) << endl;
    cout << "daylight savings: " << (p->tm_isdst) << endl;
    cout << endl;
    cout << endl;

    cout << "current date: " << (p->tm_mday) << "/" << (p->)

                                                           return 0;
}
