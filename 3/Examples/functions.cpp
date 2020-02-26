#include <std_lib.h>

int pow(int base, int exp)
{
    int res {1};
    for (int i = 0; i < exp; ++i)
        res *= base;
    return res;
}

int main()
{
    int num, exp;
    cout << "Enter a number and exponent: ";
    cin >> num >> exp;
    cout << pow(num, exp) << '\n';
}
