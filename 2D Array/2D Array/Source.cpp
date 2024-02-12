#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{
	int a[2][3];
	int r, c, x;
	
	cout << "Enter Values..." << endl;
	for (r = 0; r<2; r++)
	{
		for (c = 0; c <3; c++)
		{
			cin >> a[r][c];
			
		}
	}
	
	cout << "Enter Value to Search: ";
	cin >> x;
	
	for (r = 0; r<2; r++)
	{
		for (c = 0; c <3; c++)
		{
			
			if (x==a[r][c])
			{
				cout << "Found!";
				break;
			}
			else
			{
				cout << "Found!";
				break;
			}
		}
	}
	
	
	
	
	
	
	getch();
}
