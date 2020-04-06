#include<iostream>
#include<cmath>
using namespace std;

/****************************************************
 *            Using the const modifier              *
 ****************************************************/
int main(){
	const short nDaysInAWeek{7};
	
	// What will happen when you try to change the value of nDaysInAWeek?
//	nDaysInAWeek = 8;
	cin >> nDaysInAWeek;
	
	return 0;	
}
