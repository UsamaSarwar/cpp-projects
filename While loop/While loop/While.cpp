#include <iostream>
#include <conio.h>
using namespace std;

void main()
{
	cout << "			< < < < < While Loop > > > > >" << endl << endl;
	long a, b;
	char c;
	cout << "Enter 1st Value: ";		cin >> a;
	cout << "Enter 2nd Value: ";		cin >> b;
	cout << "Enter Operator: ";			cin >> c;

	if (c == '-')
	{
		cout << "Result= " << a - b;
	}
	else if (c == '+')
	{
		cout << "Result= " << a + b;
	}
	else if (c == '*')
	{
		cout << "Result= " << a*b;
	}
	else if (c == '/')
	{
		cout << "Result= " << a / b;
	}
	

	
	_getch();
}
