#include<iostream>
/****************************************************
 *          Type of initialization                  *
 ****************************************************/
int main(){
	/*
		PLEASE NOTE THAT YOU CANNOT DECLARE VARIABLES 
	    WITH THE SAME NAME IN THE SAME SOURCE FILE
		THIS IS JUST TO SHOW YOU THE TYPES
		THIS CODE WILL NOT RUN
	*/	
	
	// Braced Initialization or Uniform Initialization
	int myAge{20};	
	char gender{'M'};
	float accountBal{28.0};
	bool isALeapYear{true};
	int yearOfBirth{2020-myAge};	//Expressions are allowed
	
	// Function Notation
	int myAge(20);	
	char gender('M');
	float accountBal(28.0);
	bool isALeapYear(true);
	int yearOfBirth(2020-myAge);	//Expressions are allowed
	
	// Assignment Notation
	int myAge = 20;	
	char gender = 'M';
	float accountBal = 28.0;
	bool isALeapYear = true;
	int yearOfBirth = 2020-myAge;	//Expressions are allowed
	
	
	return 0;	
}
