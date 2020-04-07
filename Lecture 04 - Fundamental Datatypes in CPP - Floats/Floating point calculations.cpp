#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	const double pi {3.141592653589793}; // pi
	double a {0.2}; // Thickness 
	double z {9}; // Radius
	double volume {}; // Volume
	volume = pi*z*z*a;
	
	cout << "Volume of pizza: " << volume << endl;
	cin.get();
	
	cout << "++a: " << ++a << endl;
	cout << "--a: " << --a << endl;
	
	return 0;
}
