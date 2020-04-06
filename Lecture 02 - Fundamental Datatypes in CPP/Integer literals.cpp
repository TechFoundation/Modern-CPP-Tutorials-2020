#include<iostream>
#include<cmath>
using namespace std;

/****************************************************
 *            Using the const modifier              *
 ****************************************************/
int main(){
	// Sample integer literals
	
	//Hexadecimal (base 16)
	cout << "FF is " << 0xFF << " in base 10" << endl;
	long red{0xDEAD};	// You can save them to variables
	cout << "Value in red variabe: " << red << endl;
	cout << endl;
	
	//Octals (base 8)
	cout << "77 is " << 077 << " in base 10" << endl;
	long green{075};	// You can save them to variables
	cout << "Value in green variabe: " << green << endl;
	cout << endl;
	
	//Binary (base 2)   introduced in C++ 14
	cout << "1011 is " << 0b1011 << " in base 10" << endl;
	long blue{0b111};	// You can save them to variables
	cout << "Value in blue variabe: " << blue << endl;
	
	// make sure you dont save a decimal number with a leading 0
	long telephone{0244675434};
	cout << "Telephone: " << telephone << endl;
	
	
	return 0;	
}
