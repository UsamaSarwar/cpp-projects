#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	double f,n,i;
	cout << "			< < < < < FACTORIAL CALCULATOR > > > > >" << endl << endl;
	cout << "Enter Number: ";		cin >> n; 
	f = 1;
	for (i=1; i<=n; i++)
	{
		f = f*i;
	}
	cout << "Factorial: " << f << endl;
	_getch ();
}