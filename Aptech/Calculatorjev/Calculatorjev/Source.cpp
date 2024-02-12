#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int x, y, z;
	char op;
	cout << "Enter 1st Value= ";		 cin >> x;
	cout << "Enter 2nd Value= ";		 cin >> y;
	cout << "Enter Operator: ";			 cin >> op;
	if (op == '+')
	{
		z = x + y;
	}
	else if (op == '-')
	{
		z = x - y;
	}
	else if (op == '*')
	{
		z = x*y;
	}
	else if (op == '/')
	{
		z = x / y;
	}
	cout <<"Result= "<< z;
	_getch();
}