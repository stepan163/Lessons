#include <std_lib.h>

int main()
{
	int num1, num2, num3;

	cout << "Введите 3 целыx числа\n";
	cin >> num1 >> num2 >> num3;

	if (num1 > num2) {
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	if (num2 > num3) {
		int temp = num2;
		num2 = num3;
		num3 = temp;
	}

	if (num1 > num2) {
		int temp = num1;
		num1 = num2;
		num2 = temp;
	}

	cout << num1 << ", " << num2 << ", " << num3 << '\n';
}
