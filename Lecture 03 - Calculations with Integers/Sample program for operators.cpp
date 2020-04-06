#include<iostream>

// std names declaration
using std::cout;
using std::endl;
using std::cin;

int main(){
	// A simple interest program
	int principal{}, rate{}, time{}, interest{};
	
	//Prompt user for inputs
	cout << "Enter the Principal Rate and Time: ";
	
	// Read all values at once
	cin >> principal >> rate >> time;
	
	// Calculate the interest
	interest = (principal * rate * time)/100;
	
	// Display the results
	cout << "Interest: " << interest << endl;
	
	return 0;
}
