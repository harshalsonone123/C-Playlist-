#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool myfunc(int i, int j)
{
    return (i < j);
}
struct myclass
{
    bool operator()(int i, int j)
    {
        return (i < j);
    }
} myobject;

int main(int argc, char const *argv[])
{

    return 0;
}
