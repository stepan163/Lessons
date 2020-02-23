#include <std_lib.h>

int main()
{
    string first_name = "???", last_name = "???";
    double age = -1;

    cout << "Please, write your first_name, last_name and age: ";
    cin >> first_name >> last_name >> age;

    string full_name = first_name + ' ' + last_name;

    cout << "Hello, " << first_name << ' ' << last_name << '!';
    cout << "Your full name is '" << full_name << "'\n";
    cout << "Your age is \n"
         << "in years: " << age << '\n'
         << "in months: " << age * 12 << '\n';

    return 0;
}
