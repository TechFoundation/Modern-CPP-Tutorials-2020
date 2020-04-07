#include<iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
	cout << "1.234L ==>" << sizeof(1.234L) << " bytes."<< endl; 
	cout << "1.234 ==>" << sizeof(1.234) << " bytes." << endl; 
	cout << "1.234F ==> " << sizeof(1.234F) << " bytes." << endl; 	
	
	return 0;
}
