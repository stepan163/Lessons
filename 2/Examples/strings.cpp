#include <std_lib.h>

int main()
{
    cout << "Please enter two names: ";

    string first;
    string second;

    cin >> first >> second;

    if (first == second)
        cout << "Names are the same\n";

    if (first < second)
        cout << first << "precedes " << second << " in alphabet order\n";

    if (first > second)
        cout << first << "follows " << second << " in alphabet order\n";

}
