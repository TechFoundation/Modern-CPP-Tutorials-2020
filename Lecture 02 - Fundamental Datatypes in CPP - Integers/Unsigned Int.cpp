#include<iostream>
#include<cmath>
using namespace std;

/****************************************************
 *           All about unsigned integers              *
 ****************************************************/
int main(){
	/*
		This program demonstrates the amount of memory
		in byte,occupied by the various integer datatypes
		and the range of value they can accept.
	*/	
	long long range{};
	
	// short int type (short)
	range = pow(2, 8*sizeof(short int))-1;
	cout << "unsigned short int datatype" << endl;	
	cout << "Size: " << sizeof(short int) << " byte(s)" << endl;
	cout << "Range: " << 0 << " to " << range << endl;	
	cin.get();
	
	// int type
	range = pow(2, 8*sizeof(int))-1;
	cout << "unsigned int datatype" << endl;	
	cout << "Size: " << sizeof(int) << " byte(s)" << endl;
	cout << "Range: " << 0 << " to " << range << endl;	
	cin.get();
	
	// long int type (long)
	range = pow(2, 8*sizeof(long int))-1;
	cout << "unsigned long int datatype (long))" << endl;	
	cout << "Size: " << sizeof(long int) << " byte(s)" << endl;
	cout << "Range: " << 0 << " to " << range << endl;	
	cin.get();
	
	// long long int type (long long)
	cout << "unsigned long long int datatype (long long))" << endl;	
	cout << "Size: " << sizeof(long long int) << " byte(s)" << endl;
	cout << "Range: " << 0 << " to " << (pow(2, 8*sizeof(long long int))-1) << endl;	
	cin.get();
		
	
	
	return 0;	
}
