// For Loop:

/*
#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	double f,n,i;
	cout << "			< < < < < FACTORIAL CALCULATOR > > > > >\n\n";
	cout << "Enter Number: ";		cin >> n; 
	f = 1;
	for (i=1; i<=n; i++)
	{
		f = f*i;
	}
	cout << "Factorial: " << f << endl;
	_getch ();
}
*/

// Do - While Loop:
/*
#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	double num, fic=1, i=1;
	cout << "			< < < < < FACTORIAL CALCULATOR > > > > >\n\n";
	cout << "Enter Number: ";		cin >> num;
	do
	{
		fic = fic*i;
		i++;
	} 
	while (i <= num);
	cout << "Fictorial: " << fic;
	_getch();
}
*/

// While Loop:

/*
#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	double num, fic = 1, i = 1;
	cout << "			< < < < < FACTORIAL CALCULATOR > > > > >\n\n";
	cout << "Enter Number: ";		cin >> num;
	while (i <= num)
	{
		fic = fic*i;
		i++;
	}
	cout << "Factorial: " << fic << endl;
	_getch();
}
*/