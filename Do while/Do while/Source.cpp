#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	float a,b;
	char op,c;
	do
	{	
		cout<<"			< < < < < Calculator > > > > >"<<endl<<endl;
		cout<<"1st Number: ";	cin>>a;
		cout<<"2nd Number: ";	cin>>b;
		cout<<"Enter Operator: ";	cin>>op;
		if (op=='+')
		{cout<<"Result"<<a+b;}
		if (op=='-')
		{cout<<"Result"<<a-b;}
		if (op=='*')
		{cout<<"Result"<<a*b;}
		if (op=='/')
		{cout<<"Result"<<a/b;}
		cout<<endl<<endl;
		cout<<"Want to Try Again?"<<endl<<"Y/N"<<endl;	cin>>c;
	}
	
	while (c=='y');
	
	_getch();
}