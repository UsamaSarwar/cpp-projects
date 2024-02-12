#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	cout << "			< < < < < CALCULATOR > > > > >" << endl << endl;
	float a, b;
	char c;
	cout << "Type First Value and press Enter= ";
	cin >> a;
	cout << "Type Second Value and press Enter= ";
	cin >> b;
	cout << endl ;
	cout << "Enter Operator: ";
	cin >> c;
	cout << "\n";
	if (c=='-')
	{
		cout << "Result= " << a-b;
	}
	else if (c=='+')
	{
		cout << "Result= " << a+b;
	}
	else if (c=='*')
	{
		cout << "Result= " << a*b;
	}
	else if (c=='/')
	{
		cout << "Result= " << a / b;
	}
	else
	{
		cout <<endl<< "Error";
	}

	_getch();
	
}