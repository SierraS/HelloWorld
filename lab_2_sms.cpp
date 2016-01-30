//
//	Sierra Schellenberg
//	January 27, 2016
//	CMPSC 121
//
// This program starts with a splash screen, then finds the average of two numbers 
// and stores that value in the variable "avg"

//	pound includes
#include<iostream>
using namespace std;


// Start of main function
int main(void) {

	// print a splash screen
	cout << "\t Are you not entertained by this splash screen? "
	<< "\n \n \t \tSierra Schellenberg"
	<< "\n \t \tCMPSC 121"
	<< "\n \t \t27 January 2016" << endl;

	// Declare and initialize the variables
	double x = 49.6;
	double y = 23.8;
	int num = 2;
	
	// 	Perform calculations - find average of two numbers
	double avg = (x + y) / num;	
	
	//	Print the results using cout
	cout << "\n The average of " << x << " and " << y << " is " << avg << "." << endl;  
	
	return 0;
	
} // end of main method