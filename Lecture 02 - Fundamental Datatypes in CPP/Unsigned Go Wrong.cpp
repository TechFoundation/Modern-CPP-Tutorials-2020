#include<iostream>
#include<cmath>
using namespace std;

/****************************************************
 *          When unsigned type go wrong             *
 ****************************************************/
int main(){
	unsigned short age{};
	
	cout << "Enter age: ";
	cin >> age;
	
	cout << "Age: " << age;
	cin.get();
	
	return 0;	
}
