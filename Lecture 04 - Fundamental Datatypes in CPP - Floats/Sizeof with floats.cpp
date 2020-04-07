#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	cout.precision(100);  	
  	
	cout << "float type: " << sizeof(float) << " bytes" << endl;
	cout << "double type: " << sizeof(double) << " bytes" << endl;
	cout << "long double type: " << sizeof(long double) << " bytes" << endl;
	
	cin.get();
	
	float fNum{3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481};
	double dNum{3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481};
	long double ldNum{3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117067982148086513282306647093844609550582231725359408128481};
	
	cout << "float  precision: " << fNum << endl;
	cout << "double precision: " << dNum << endl;
	cout << "Long double prec: " << ldNum << endl;
	
	fNum = 0.00000000000000000000000000000000000000000000000000000000000620899;
	dNum = 0.00000000000000000000000000000000000000000000000000000000000620899;
	ldNum = 0.00000000000000000000000000000000000000000000000000000000000620899;
	
	
	cin.get();
	std::cout.precision (5);
	std::cout <<   std::scientific;
	cout << "float  precision: " << fNum << endl;
	cout << "double precision: " << dNum << endl;
	cout << "Long double prec: " << ldNum << endl;
}
