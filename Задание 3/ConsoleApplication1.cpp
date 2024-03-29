#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RU");
	int i;
	int sum = 0;
	int pr = 1;

	for (i = 1; i <= 100; i++)
	{
		sum = sum + i;
		pr = pr * i;
	}
	cout << "Сумма чисел от 1 до 100 = " << sum << endl;
	cout << "Сумма чисел от 1 до 100 = " << pr << endl;
	return 0;
}