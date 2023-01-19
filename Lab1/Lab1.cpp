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
	cout << "Hi, A and B ! \n";
	cout << "My name is Anthony Arnold. Nice to meet you. \n";
	cout << "\\|/ ____ \\|/ \n";
	cout << " @~/ ,. \\~@ \n";
	cout << "/_( \\__/ )_\\ \n";
	cout << "   \\____/ \n";

	cout << "\n";

	const int DOLLARS = 100;
	const int QUARTERS = 25;
	const int DIMES = 10;
	const int NICKELS = 5;
	const int PENNIES = 1;

	float amtdue;
	cout << "Enter the amount due: $ ";
	cin >> amtdue;

	float amtrecive;
	cout << "Enter the amount recieved: $ ";
	cin >> amtrecive;

	int change = (amtrecive - amtdue)*100;
	int dollars = change / DOLLARS;
	cout << fixed <<setw(15) <<"Dollars: " << dollars << endl;

	int quarters = ((change - (dollars*DOLLARS)) / QUARTERS);
	cout << setw(15)<<"Quarters: " << quarters << endl;
	change = change - (dollars * DOLLARS) - (quarters * QUARTERS);

	int dimes = change / DIMES;
	cout << setw(15)<<"Dimes: " << dimes << endl;
	change = change - (dimes * DIMES);

	int nickels = change / NICKELS;
	cout << setw(15)<<"Nickels: " << nickels << endl;
	change = change - (nickels * NICKELS);

	int pennies = change / PENNIES;
	cout << setw(15)<<"Pennies: " << pennies << endl;
	return 0;
}