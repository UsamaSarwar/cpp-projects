#include <iostream>
using namespace std;

int main()
{
	int arr1[10];
	cout << "enter 10 elements of array (+ or -) : ";
	
	for (int i = 0; i < 10; i++)
	{
		cout << "ENTER A VALUE FOR ARRAY ELEMENT (" << i << ") :";
		cin >> arr1[i];
		cout << endl;
	}
	
	for (int i = 0; i < 10; i++)
	{
		if ((arr1[i] % 2) == 1)  //for +ve odd values
		{
			arr1[i] = arr1[i] + 1;
		}

		else if ((arr1[i] % 2) == -1)   // for -ve odd values
		{
			arr1[i] = arr1[i] - 1;
		}
	}


	for (int i = 0; i < 10; i++)
	{
		cout << "FINAL RESULT OF ARRAY ELEMENT (" << i << ") :" << arr1[i];
		cout << endl;

	}



	system("pause");
	return 0;
}