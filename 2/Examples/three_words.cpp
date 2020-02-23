#include <std_lib.h>

int main()
{
	string word1, word2, word3;
	string temp;

	cout << "Введите 3 слова\n";
	cin >> word1 >> word2 >> word3;

	if (word1 > word2) {
		temp = word1;
		word1 = word2;
		word2 = temp;
	}

	if (word2 > word3) {
		temp = word2;
		word2 = word3;
		word3 = temp;
	}

	if (word1 > word2) {
		temp = word1;
		word1 = word2;
		word2 = temp;
	}

	cout << word1 << ", " << word2 << ", " << word3 << '\n';
}
