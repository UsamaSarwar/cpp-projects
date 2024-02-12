#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	cout << "			< < < < < Greatest Value Identifier > > > > > "<< endl << endl;
	long a, b, c;
	cout << "First Value: ";	cin >> a;
	cout << "Second Value: ";	cin >> b;
	cout << "Third Value: ";	cin >> c;
	cout << endl;
	
	if (a > b)
	{
		if (b > c)
		{
			cout << "Greatest Value: " << a;
		}
		else if (b = c)
		{
			cout << "Greatest Value: " << a;
		}
		
	}

	if (b>a)
	{
		if (a>c)
		{
			cout << "Greatest Value: " << b;
		}
		else if (a=c && a>c)
		{
			cout << "Greatest Value: " << b;
		}
		
	}
	if (b>c)
	{
		if (c>a)
		{
			cout << "Greatest Value: " << b;
		}
		else if (a = c && a<c)
		{
			cout <<"Greatest Value: " << b;
		}
		
	}
	if (c>b)
	{
		if (b>a)
		{
			cout << "Greatest Value: " << c;
		}
		else if (b=a && b>a)
		{
			cout << "Greatest Value: " << c;
		}
		
	}
	if (a>c)
	{
		if (c>b)
		{
			cout << "Greatest Value: " << a;
		}
		else if (c=b && c>b)
		{
			cout << "Greatest Value: " << a;
		}
		
	}
	if (c>a)
	{
		if (a>b)
		{
			cout << "Greatest Value: " << c;
		}
		else if (a=b && a>b)
		{
			cout << "Greatest Value: " << c;
		}
		
	}
	else if (a=b=c)
	{
		cout << "All are same ;) = " << a;
	}
	else
	{
		cout <<"Error";
	}
	getch();
}
