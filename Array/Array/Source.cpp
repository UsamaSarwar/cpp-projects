#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int a[5], sum;
	cout << "Enter Five Numbers: " << endl;
	//Input Values...
	cin >> a[0];
	cin >> a[1];
	cin >> a[2];
	cin >> a[3];
	cin >> a[4];
	//sum = a[0] + a[1] + a[2] + a[3] + a[4];
	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum = sum + a[i];
	}
	
	//Output...
	cout << "Sum= " << sum << endl;
	cout << "Average =" << sum / 5 << endl;
	_getch();
}