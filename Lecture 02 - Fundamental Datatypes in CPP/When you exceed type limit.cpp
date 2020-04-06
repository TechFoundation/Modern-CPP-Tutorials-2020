#include<iostream>

using namespace std;
/****************************************************
 *       Potential Issues with Datatype Abuse       *
 ****************************************************/
int main(){
	// Setting a numnber greater or smaller than the 
	// Limits of an integer datatype
	
	short accountBal{0};
					
	cout << "\tPrevious Balance: " << accountBal << endl;
	
	accountBal = accountBal + 32800;
	cout << "\t==================================" << endl;	
	cout << "\tAccount Balance: " << accountBal << endl;
	cout << "\t==================================\n\t";
		
	return 0;	
}
