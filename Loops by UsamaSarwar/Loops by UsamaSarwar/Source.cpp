#include <iostream>
#include <conio.h>
using namespace std;
void main ()
{
	int num;
// 1:
	
	cout << "\t\t< < < < < LOOPING STRUCTURE PRACTICE PROBLEMS> > > > >\n\nFOR LOOP:\n\n";
	cout << "Q. 1 Program that displays Assignment counting from 1 to 10 using for loop:\n\n";
	for (int i = 1; i <= 10;i++)
	{
		cout << i << endl;
	}
// 2:
	cout << "\n\nQ. 2 Program that inputs table number and length of table and \nthen displays the table using for loop:\n\n";
	int length;
	cout << "Enter Table Number= ";		cin >> num;
	cout << "Enter Length of Table= ";	cin >> length;
	for (int i = 1; i <= length; i++)
	{
		cout << num << "*" << i << "=" << num*i << endl;
	}
// 3:
	cout << "\n\nQ. 3 Program that displays product of all even numbers \nfrom 1 to 10 using for loop:\n\n";
	int even = 1;
	for (int i = 1; i <= 5; i++)
	{
		even = even*(i * 2);
	}
	cout << "Product of all Even numbers from 1 to 10= " << even;
	
// 4:
	cout << "\n\nQ. 4 Program that finds the sum of the squares of integers from 1 to n. \n n is the positive integer value, entered by user:\n\n";
	int n=0;
	cout << "Enter a Positive Integer= ";		cin >> num;
	for (int i = 1; i <= num; i++)
	{
		n = n + (i*i);
	}
	cout << n;  
// While Loop
	cout << "\n\nWhile Loop:\n\n";
// 1:
	cout << "\n\nQ.1 Program that displays your name 10 times using while loop:\n\n";
	num = 1;
	while (num <= 10)
	{
		cout << "Usama\n";
		num++;
	}


// 2:
	cout << "\n\nQ. 2 Program that displays first 10 numbers and their sum using while loop:\n\n";
	num = 1;
	int sum = 0;
	while (num <= 10)
	{
		cout << num << endl;
		sum = num + sum;
		num++;
	}
	cout << endl<<"Sum= "<<sum;
// 3:
	cout << "\n\nQ 3. Program that displays counting from 1 to 20 using while loop:\n\n";
	num = 1;
	while (num <= 20)
	{
		cout << num << endl;
		num++;
	}
// 4:
	cout << "\n\nQ 4. Program that displays first 10 numbers with their squares using while loop:\n\n";
	num = 1;
	while (num <= 10)
	{
		cout << num*num << endl;
		num++;
	}
// 5:
	cout << "\n\nQ 5. Program that inputs a number from the user and displays \na table of that number using while loop:\n\n";
	num = 1;
	//int n;
	cout << "Enter Number: ";		cin >> n;
	while (num <= 10)
	{
		cout <<n<<"*"<<num<<"="<<num*n << endl;
		num++;
	}
// 6:
	cout << "\n\nQ 6. Program that inputs a number from the user and displays \nthe factorial of that number using while loop:\n\n";
	num = 1;
	int fic = 1;
	cout << "Enter Number: ";		cin >> n;
	while (num <= n)
	{
		fic= fic*num;
		num++;
	}
	cout << fic;
// 7:
	cout << "\n\nProgram that inputs a number from user and displays n Fibonacci terms. \nIn Fibonacci sequence, sum of two successive terms gives the third term:\n\n";
	int t1 = 0, t2 = 1, nextTerm = 0;
	cout << "Enter the number of terms: ";			cin >> n;
	cout << "Fibonacci Series: ";
	for (int i = 1; i <= n; ++i)
	{
		if (i == 1)
		{
			cout << " " << t1;
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
	

	_getch ();
}