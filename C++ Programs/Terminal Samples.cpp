#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main ()
{
	long arr[10];
	cout<<"Enter 10 integers: \n";
	for (int i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	// Program By UsamaSarwar
	// Prayers are needed! :)
	for (int i=0;i<10;i++)
	{
		if ((arr[i]%2)!=0)
		{
			arr[i]=arr[i]+1;
		}
	}
	cout<<"\n\aAll Even!\n";
	for (int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	getch ();
}
