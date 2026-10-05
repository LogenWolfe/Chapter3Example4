// Name: Logen N. Wolfe
// Date 10/5/2026
// Program: Chapter 3 Example 4
// Description: Many finanical experts advise property owners to insure their homes or buildings for at least 80% of the amount it would cost to replace the structure.
// Write a program that asks the user to enter the replacement cost of a building and then displays the minimum amount of insurance they should buy for the property.
#include <iostream>
#include <iomanip>
using namespace std; 

int main()
{
    double replacementCost;
    double minimumInsurance;

	cout << "Heya! Welcome to Logen's Insurance Calculator!" << endl;
	cout << "First, gimme the replacement cost of..whatever building you have!" << endl;
	cin >> replacementCost;
	minimumInsurance = replacementCost * 0.8;
	cout << "Personally? I'd say the amount of insurance should be...about $" << setprecision(6) <<minimumInsurance << "!" << endl;
	return 0;
}

