#include <std_lib.h>

int main()
{
	cout << "Введите число и мы скажем чётное ли оно или нет: ";
	int num;
	cin >> num;

	if (num % 2 == 0)
		cout << "Число, " << num << " является чётным.\n";
	else
		cout << "Число, "<< num << " является нечётным.\n";


}
