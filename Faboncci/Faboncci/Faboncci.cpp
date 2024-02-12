#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	cout << "\n\nProgram that inputs a number from user and displays n Fibonacci terms. \nIn Fibonacci sequence, sum of two successive terms gives the third term:\n\n";
	int t1 = 0, t2 = 1, nextTerm = 0, n;
	cout << "Enter the number of terms: ";			cin >> n;
	cout << "Fibonacci Series: ";
	for (int i = 1; i <= n; ++i)
	{
		if (i == 1)
		{
			cout << t1 <<" ";
			continue;
		}
		if (i == 2)
		{
			cout << t2 << " ";
			continue;
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
		cout << nextTerm << " ";
	}
	_getch();
}