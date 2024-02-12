#include <iostream>
#include <conio.h>
using namespace std;
int function(int x, int y, int z)
{
	cout << "Enter First Value= ";		 cin >> x;
	cout << "Enter Second Value= ";		 cin >> y;
	char op;
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
	else if (op == '%')
	{
		z = x%y;
	}
	return z;
}
void main()
{
	function(0,0,0);
	_getch();
}