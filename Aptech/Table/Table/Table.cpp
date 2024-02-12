#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int a, b;
	cout << "Enter Number: ";
	cin >> a;
	for (b = 1; b <= 20; b++)
	{
		cout << a << '*' << b << "=" << a*b << endl;
	}
	_getch();
}