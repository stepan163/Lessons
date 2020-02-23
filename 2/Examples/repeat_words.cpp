#include <std_lib.h>

int main()
{
    int number_of_words = 0;
    string previous = " ";
    string current;

    while (cin >> current) {
        ++number_of_words;
        if (previous == current) {
            cout << "Repeaed word: " << current
                 << "after " << number_of_words << " words.\n";
        }
        previous = current;
    }
}
