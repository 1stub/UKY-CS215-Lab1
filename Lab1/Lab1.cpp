/*
 * Course: CS215-00x
 * Project: Lab 1 - 
 * Purpose: This program calculates the total change in given the amount owed and amount due. 
 * Author: Anthony Arnold
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "Hello, Bikram and Rylie ! \n";
	cout << "My name is Anthony Arnold. Nice to meet you. \n";
	cout << "\\|/ ____ \\|/ \n";
	cout << " @~/ ,. \\~@ \n";
	cout << "/_( \\__/ )_\\ \n";
	cout << "   \\____/ \n";

	cout << "\n";

	const int DOLLARS = 100; // creates a constant int that contains the amount of pennies in a dollar
	const int QUARTERS = 25;// creates a constant int that contains the amount of pennies in a quarter
	const int DIMES = 10; // creates a constant int that contains the amount of pennies in a Dime
	const int NICKELS = 5; // creates a constant int that contains the amount of pennies in a nickel
	const int PENNIES = 1; // creates a constant int that contains a penny

	float amtdue;
	cout << "Enter the amount due: $ ";
	cin >> amtdue; // Prints string and asks for userinupt, then storing input in amtdue

	float amtrecive;
	cout << "Enter the amount recieved: $ ";
	cin >> amtrecive; // prints string and asks for userinput, then stores in amtrecive

	cout << "The change is: \n"; // prints "The change is: " and the prints a new line

	int change = (amtrecive - amtdue)*100 + 0.5; // converts the amount of change (amount recieved -  amount due) into pennies and stores in an int
	int dollars = change / DOLLARS; // divides change by the constant int DOLLARS
	cout <<"Dollars: " << setw(15)<< dollars << endl; // prints the value stored in dollars with a set width 

	int quarters = ((change - (dollars*DOLLARS)) / QUARTERS); // multiplies dollars by 100 and subtracts from change. Then divides total num by 25
	cout <<"Quarters: " << setw(14) << quarters << endl; // prints quarters
	change = change - (dollars * DOLLARS) - (quarters * QUARTERS); // updates change to account for dollars and quarters that have been removed

	int dimes = change / DIMES; // takes change and divides by 10 
	cout <<"Dimes: " << setw(17) << dimes << endl; // prints dimes
	change = change - (dimes * DIMES); // updates change with value of dimes removed

	int nickels = change / NICKELS; // takes change and divides by 5 
	cout <<"Nickels: " << setw(15) << nickels << endl; // prints nickels
	change = change - (nickels * NICKELS); // removes nickels from change 

	int pennies = change / PENNIES; //  divides change by 1 and stores in pennies 
	cout << "Pennies: "<< setw(15) << pennies << endl; // prints pennies 
	
	return 0;
}