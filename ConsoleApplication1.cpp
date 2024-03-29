#include <iostream>

using namespace std;

int main()
{
	int x = 10;

	if (x < 11)
	{
		cout << "x < 11 is true!\n";  // executed
	}
	else
	{
		cout << "x < 11 is false!\n"; // not executed
	}

	// no else statement
	bool flag = false;
	if (flag == true)
	{
		x = 100; // not executed
	}

	int *p = new int(25);
	if (p)
	{
		cout << *p << "\n"; // outputs 25
	}
	else
	{
		cout << "p is null!\n"; // executed if memory allocation fails
	}
}