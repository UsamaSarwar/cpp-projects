#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	cout << "PROGRAM # 1" << endl;
	for (int a = 1; a <= 1; a++)
	{
		cout << "****";
		cout << endl;
		for (int b = 1; b <= 1; b++)
		{
			cout <<"*  *"<< endl << "*  *";
			cout << endl << "****"<<endl;
		}
	}
	cout <<  endl;
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

	cout << "\nPROGRAM # 2\n";
	double num1, num2, r;
	char ch;
	cout << "Number 1: ";		cin >> num1;
	cout << "Number 2: ";		cin >> num2;
	cout << "Enter Radius: ";	cin >> r;
	cout << "Chose one Symbol (*/#)\n# for Area and Circumference of Circle\n* for Addition and Division of two Numbers\nEnter Symbol: ";	cin >> ch;
	if (ch == '#')
	{
		cout << "Area of Circle= " << (3.14)*r*r <<" sq. units"<< endl;
		cout << "Circumference of Circle= " << 2 * (3.14)*r<<" units";
	}
	else if (ch == '*')
	{
		cout << "Addition of two numbers= " << num1 + num2 << endl;
		cout << "Division of two numbers= " << num1 / num2;
	}
	else
	{
		cout << "Invalid!";
	}
	cout << "\n\nPROGRAM # 3\n";
	int num;
	num1= 0;
	num2= 1;
	for (int i = 1; i <= 10; ++i)
	{
		num = num1 + num2;
		cout << num1 << "+" << num2 << "=" << num << endl;
		num1 = num2;
		num2 = num;
	}
	cout << "\nFabonacci Series: ";
	num1 = 0, num2 = 1;
	for (int i = 1; i <= 10; ++i)
	{
		num = num1 + num2;
		cout << num << " ";
		num1 = num2;
		num2 = num;
	}
	cout << "\n\nPROGRAM # 4\n";
	int d, m, y;
	cout << "Enter Date: ";		cin >> d;
	cout << "Enter Month: ";	cin >> m;
	cout << "Enter Year: ";		cin >> y;
	if (m>=1 && m<=10)
	{
		cout << "/nDate: " << d << "/" << m << "/" << y;
	}
	else
	{
		m = 1;
		cout << "\nDate: " << d << "/" << m << "/" << y;
	}
	_getch();
}