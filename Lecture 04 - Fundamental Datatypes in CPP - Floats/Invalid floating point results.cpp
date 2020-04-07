#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	double a{ 1.5 }, b{}, c{};
	double result { a / b };
 	cout << a << "/" << b << " = " << result << endl;
 	cout << result << " + " << a << " = " << result + a << endl;
 	result = b / c;
 	cout << b << "/" << c << " = " << result << endl;
}
