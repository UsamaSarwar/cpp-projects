#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int num1, num2;
	cout << "First Number: ";		cin >> num1;
	cout << "Second Number: ";	cin >> num2;
	if (num2 != 0)
	{
		cout << "Result: " << num1 / num2;
	}
	else if (num2 == 0)
	{
		cout << "First Number: ";		cin >> num1;
		cout << "Second Number: ";	cin >> num2;
		if (num2 != 0)
		{
			cout << "Result: " << num1 / num2;
		}
	}
	/*int num, ans;1
	cout << "Enter Number: ";		cin >> num;
	ans = (num % 2);
	if (ans == 0)
	{
		cout << "Even Number!";
	}
	else
	{
		cout << "Odd Number!";
	}*/

	/*float num;
	cout << "\t\t\t\t< < < < < TAX CALCULATOR > > > > >\n\n";
	cout << "\tSALARY:\t";			cin >> num;	
	cout << "\n";
	
		if (num >= 50000)
		{
			cout << "\t   TAX: (20%)\t" << (20 * num / 100) << "/-";
		}
		else if (num >= 40000)
		{
			cout << "\tTAX: (15%)\t" << (15 * num / 100) << "/-";
		}
		else if (num >= 30000)
		{
			cout << "\tTAX: (10%)\t" << (10 * num / 100) << "/-";
		}
		else
		{
			cout << "\tSorry, No Bonus!";
		}
	*/

	_getch();
}