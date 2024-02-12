/* We know that 2012 started at Sunday. After knowing that it's easy to determine what day it was on the 2nd of January, it should be Monday.
What is the algorithm, and C++ code to determine the day on October 04, 2012. (5+5=10 marks)
Solution:*/
// Library Files...
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
// Main Function...
void main()
{
	// Declaration...
	string Month;
	int Date, Year, Day;
	// User Interface...
	cout << "				  < < < < < DAY CALCULATOR > > > > > \n";
	cout << "				      (Designed for October 2012)\n\n";
	// User's Instructions... & DAY CODES...
		cout << " INPUT DATE FORMAT\t\t\t\tDAY CODES\n";
		cout << "		Date:  01\t\t\tDay 1: Monday		Day 2: Tuesday\n";
		cout << "		Month: October\t\t\tDay 3: Wednesday	Day 4: Thursday\n";
		cout << "		Year:  2012\t\t\tDay 5: Friday		Day 6: Saturday\n";
		cout << "\t\t\t\t\t\tDay 7: Sunday\n\n";
	// User Input...
	cout << " Date:  ";				cin >> Date;
	cout << " Month: ";				cin >> Month;
	cout << " Year:  ";				cin >> Year;
	// Calculation...
	Day = (Date % 7);
	// Output...
	cout << "\n\n					It's Day " << Day<< " of the week.";
	// Programmer Details...
	cout << "\n\n\n											Coded by: Usama Sarwar";
	cout << "\n											\t  FA17-BCS-090-B";
	_getch();
}



///* We know that 2012 started at Sunday.
//After knowing that it's easy to determine what day it was on the 2nd of January, it should be Monday.
//What is the algorithm, and C++ code to determine the day on October 04, 2012 ? (5+5=10)marks
//Solution:*/
//// Library Files...
//#include <iostream>
//#include <conio.h>
//#include <string>
//using namespace std;
//// Main Function...
//void main()
//{
//	// Declaration...
//	string Month, Day;
//	int Date, Year;
//	// User Input...
//	cout << "\n\n          < < < < < < DAY CALCULATOR > > > > > \n\n\n";
//	cout <<"Range: October 01, 2012 --- October 07, 2012\n\n\n";
//	cout << "Enter Month: ";			cin >> Month;
//	cout << "Enter Date: ";				cin >> Date;
//	cout << "Enter Year: ";				cin >> Year;
//	cout << "\n \n";
//	// Calculation of Day...
//	if (Month == "October" ^ Month == "october")
//	{
//		if ((Date-1)%7 == 1)
//		{
//			Day = "Monday";
//		}
//		if ((Date-2)%7 == 1)
//		{
//			Day = "Tuesday";
//		}
//		if ((Date-3)%7 == 1)
//		{
//			Day = "Wednesday";
//		}
//		if (Date == 4)
//		{
//			Day = "Thursday";
//		}
//		if (Date == 5)
//		{
//			Day = "Friday";
//		}
//		if (Date == 6)
//		{
//			Day = "Saturday";
//		}
//		if (Date == 7)
//		{
//			Day = "Sunday";
//		}
//		
//	}
//	
//	else
//	{
//		cout << "Possible Errors: \nMonth isn't October!\nDate is Out of Range!\nYear isn't 2012!";
//	}
//	// User Output...
//	cout << "Day: "<< Day;
//	
//	_getch();
//}