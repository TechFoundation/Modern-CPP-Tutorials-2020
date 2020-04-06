#include<iostream>
#include<cmath>
using namespace std;

/****************************************************
 *           All about signed integers              *
 ****************************************************/
int main(){
	/*
		This program demonstrates the amount of memory
		in byte,occupied by the various integer datatypes
		and the range of value they can accept.
	*/	
	long long range{};
	
	// char type
	cout << "char datatype" << endl;	
	cout << "Size: " << sizeof(char) << " byte(s)" << endl;
	cout << "Range: " << 0 << " to " << (pow(2, 8*sizeof(char))) << endl;	
	cin.get();	// Pause the execution until enter key is pressed
	
	// short int type (short)
	range = pow(2, 8*sizeof(short int));
	cout << "short int datatype" << endl;	
	cout << "Size: " << sizeof(short int) << " byte(s)" << endl;
	cout << "Range: " << (-range/2) << " to " << ((range/2) - 1) << endl;	
	cin.get();
	
	// int type
	range = pow(2, 8*sizeof(int));
	cout << "int datatype" << endl;	
	cout << "Size: " << sizeof(int) << " byte(s)" << endl;
	cout << "Range: " << (-range/2) << " to " << ((range/2) - 1) << endl;	
	cin.get();
	
	// long int type (long)
	range = pow(2, 8*sizeof(long int));
	cout << "long int datatype (long))" << endl;	
	cout << "Size: " << sizeof(long int) << " byte(s)" << endl;
	cout << "Range: " << (-range/2) << " to " << ((range/2) - 1) << endl;	
	cin.get();
	
	// long long int type (long long)
	range = pow(2, 8*sizeof(long long int));
	cout << "long long int datatype (long long))" << endl;	
	cout << "Size: " << sizeof(long long int) << " byte(s)" << endl;
	cout << "Range: " << (-range/2) << " to " << ((range/2) - 1) << endl;	
	cin.get();
		
	
	
	return 0;	
}
