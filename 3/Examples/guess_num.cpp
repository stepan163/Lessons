#include<std_lib.h>

int main()
{
    int low {0}, high {10000}, guess {};
    char ans;
    bool guessed {false};
    int attempts {0};

    while (!guessed) {
        guess = (low + high) / 2;
        ++attempts;
        cout << "Is your number " << guess << "? ";
        cin >> ans;
        if (ans == 'y' || ans == 'Y')
            guessed = true;
        else {
            cout << "Is your number greater than " << guess << "? ";
            cin >> ans;
            if (ans == 'y' || ans == 'Y')
                low = guess;
            else
                high = guess;
        }
    }

    cout << "Winner winner, chiken dinner !\n";
    cout << "I took " << attempts << " attempts.\n";

    return 0;
}
