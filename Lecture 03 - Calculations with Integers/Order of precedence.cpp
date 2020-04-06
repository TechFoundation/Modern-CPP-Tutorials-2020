#include<iostream>

// std names declaration
using std::cout;
using std::endl;
using std::cin;

int main(){
	// A simple interest program
	int expr1{8+9/3-6*4%3-2+7%3};
	int expr2{(8+9)/3-6*4%(3-2)+7%3};
	
	cout << "Expr1: " << expr1 << endl;
	cout << "Expr2: " << expr2 << endl;
	
	return 0;
}
