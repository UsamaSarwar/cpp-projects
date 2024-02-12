#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int c, r;
	for (c = 1; c <= 9; c++)
	{
		for (r = c; r <= 9; r++)
		{
			cout << "*";
		}
		cout << endl;
	}
	_getch();
}