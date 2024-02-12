// pointer with array

#include <iostream>
 using namespace std;

 int main()
 {
 int numbers[] = {10, 20, 30, 40, 50};

 cout << "The first element of the array is ";
 cout << *numbers << endl;
 //Way 2
 cout<<*(numbers+0)<<endl;
 // Adding in 1st index
 cout<<*numbers+1;
 return 0;
 }
 
