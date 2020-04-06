#include<iostream>

// std names declaration
using std::cout;
using std::endl;

int main(){
	int num1{11}, num2{2};
	
	// Multiplication
	cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;	
	
	// Division
	cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;	
	
	// Module
	cout << num1 << " % " << num2 << " = " << (num1 % num2) << endl;	
	
	// Addition
	cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
	
	// Substraction
	cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;	
	
	return 0;
}
