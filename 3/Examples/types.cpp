#include <std_lib.h>

int main()
{
//    cout << "char - " << sizeof(char) << '\n';
//    cout << "int - " << sizeof(int) << '\n';
//    cout << "bool - " << sizeof(bool) << '\n';
//    cout << "double - " <<sizeof(double) << '\n';
//    cout << "float - " <<sizeof(float) << '\n';
    int i {10000};
    char c {i};
//    cout << c << '\n';
    cout << i * 10 << '\n';
    int d {i * 10};
    return 0;
}
