#include<iostream>

// std names declaration
using std::cout;
using std::endl;
using std::cin;

int main(){
	// Compound assignment
	short age {15};
	
	cout << "sizeof on type: " << sizeof(long) << " bytes" << endl;
	cout << "sizeof on variable: " << sizeof age << " bytes" << endl;
	cout << "sizeof on expression: " << sizeof(age % 4 * 5) << " bytes" << endl;
	
	return 0;
}
