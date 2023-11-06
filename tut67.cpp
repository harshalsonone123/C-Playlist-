#include <iostream>
using namespace std;

int funcaverage(int a, int b)
{
    float avg = (a + b) / 2;
    return avg;
}
int main(int argc, char const *argv[])
{
    float a;
    a = funcaverage(5, 2);
    printf("the average of thes numbers is %", a);
    return 0;
}
