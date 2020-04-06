#include<iostream>

using namespace std;
/****************************************************
 *              Zero Initialization                 *
 ****************************************************/
int main(){
	// We can deliberately set the zeroes of the various
	// data types to initialize them however, we can enjoy
	// the automatic zero initialization of the braced 
	// initiailizer;
	
	int myAge{};	
	char gender{};
	float accountBal{};
	bool isALeapYear{};
	
	cout << "MyAge: " << myAge << endl;
	cout << "gender: " << gender << endl;
	cout << "accountBal: " << accountBal << endl;
	cout << "isALeapYear: " << isALeapYear << endl;

	return 0;	
}
