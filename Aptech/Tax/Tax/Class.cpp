#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	float x;
	cout << "Enter Salery =";
	cin >> x;
	cout << endl << endl;

	if (x<=20000)
	{

		cout << "Tax= " << x * 0 / 100 << endl;
		cout << "Net Pay= " << x;
	}
	else if (x>20000 && x<40000)
	{
		cout << "Tax= " << x * 15 / 100 << endl;
		cout << "Net Amount= " << x - (x * 15 / 100);
	}
	else if (x>=40000)
	{
		cout << "Tax= "<<x*17/100;
		cout << "Net Amount= " << x - (x * 17 / 100);
	}
	else
	{
		cout << "Error...";
	}
	_getch();
}