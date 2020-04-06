#include<iostream>

// std names declaration
using std::cout;
using std::endl;
using std::cin;

int main(){
	short total{2}, count{5};
	
	// Increment and decrement operators
	//========================================
	total = count++ + 6;	
	// Best written as 
	//total = 6 + count++;
	// Alternatively
	//total = (count++) + 6;
	
	// Equivalent to 
	//total = count + 6;
	//++count;
	
	cout << "total = " << total << endl;
	//========================================
	// Avoid changing the value of the same variable twice in an expression
	count  = 5;
	total = ++count * 3 + count++ * 5;
	cout << "total: " << total << endl;
	
	count = 5;
	count = count++ + 1;
	cout << "count: " << count << endl;
	// Note that x++ is not the same as x + 1, but x = x + 1
	
	return 0;
}
