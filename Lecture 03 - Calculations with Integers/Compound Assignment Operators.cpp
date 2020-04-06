#include<iostream>

// std names declaration
using std::cout;
using std::endl;
using std::cin;

int main(){
	// Compound assignment
	short y{7}, x{10}, z{4};
	
	y += 1;	//Equivalent to y = y + 1
	cout << "y = " << y << endl;
	
	x *= y + 1;	//Equivalent to x = x * (y + 1) NOT x = x * y + 1;
	cout << "x = " << x << endl;
	
	z %= x + y;	//Equivalent to z = z % (x + y);
	cout << "z = " << z << endl;
	
	return 0;
}
