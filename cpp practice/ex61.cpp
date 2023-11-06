#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, first, last, sum, digit, nn, a, b;
    cout << "input number ";
    cin >> n;
    digit = (int)log10(n);
    first = n / pow(10, digit);
    last = n % 10;
    a = first * (pow(10, digit));
    b = n % a;
    n = b / 10;
    nn = last * (pow(10, digit)) + (n * 10 + first);
    cout << "the number after swaping first and last digits are: " << n << endl;
    return 0;
}
