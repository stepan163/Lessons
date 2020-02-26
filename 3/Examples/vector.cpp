#include <std_lib.h>

int main()
{
    vector<int> numbers;

    while (numbers.size() != 10) {
        int num;
        cout << "Enter a number: ";
        cin >> num;
        numbers.push_back(num);
    }

    for (int i = 0; i < numbers.size(); ++i)
        cout << numbers[i] << '\n';

}
