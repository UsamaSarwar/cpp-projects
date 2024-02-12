#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	cout << "			< < < < < Search > > > > > " << endl << endl;
	int a[5];
	int r, c, sa;
	c = 0;
	for (r = 0; r < 5; r++)
	{
		cin >> a[r];
	}
	cout << "Enter Value to Search: ";
	cin >> sa;
	for (r = 0; r <= 5; r++)
	{
		if (sa == a[r])
		{
			c++;
		}
	}
	if (c == 1)
	{
		cout << "Found!";
	}
	else
	{
		cout << "Not Found!";
	}
		_getch();
}