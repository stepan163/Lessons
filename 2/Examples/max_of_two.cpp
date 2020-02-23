#include <std_lib.h>

int main()
{
    double num1;
    double num2;

	cout << "Write 2 numbers:\n";
    cin >> num1 >> num2;

	if (num1 > num2)
		cout << num1 << " is greater than " << num2 << ".\n";
	else if (num1 < num2)
		cout << num1 << " is less than " << num2 << ".\n";
	else
		cout << num1 << " is equal to " << num2 << ".\n";

	cout << num1 << " + " << num2 << " = " << num1 + num2 << '\n';
	cout << num1 << " - " << num2 << " = " << num1 - num2 << '\n';
	cout << num1 << " * " << num2 << " = " << num1 * num2 << '\n';

	if (num2 == 0)
		cout << "ERROR! can not divide by 0\n";
	else
		cout << num1 << " / " << num2 << " = " << num1 / num2 << '\n';

	return 0;
}

