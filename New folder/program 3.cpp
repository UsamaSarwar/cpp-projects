#include <iostream>
#include <string>
using namespace std;
void ISBno();
void KHIno();
void LHRno();
//int ptr();

struct phoneNUM
{
	char PhoneNo[12];
};

int main()
{
	// use do while here
	cout <<"enter phone number :";
	phoneNUM num1;
	
	cin.getline(num1.PhoneNo, 12);
	
	if (num1.PhoneNo[3] == '4' && num1.PhoneNo[4] == '2'){
		LHRno();
		
	}
	else if (num1.PhoneNo[3] == '5' && num1.PhoneNo[4] == '1'){
		ISBno();
	}

	else if (num1.PhoneNo[3] == '2' && num1.PhoneNo[4] == '1')
	{
		KHIno();

	}
	
	
	

	system("pause");
	return 0;
}

void LHRno(){
	cout << "\nNumber is from Lahore\n";
}

void ISBno(){
	cout << "\nNumber is from Islamabad\n";
}

void KHIno(){
	cout << "\nNumber is from KArachi\n";
}

