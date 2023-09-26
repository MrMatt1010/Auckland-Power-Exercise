// Auckland-Power.cpp : 
//

#include <iostream>
using namespace std;
#include <string>

double calculateBill(int unitsConsumed) {
	//Rate of Auckland power coded in for assessment
	double rate_1 = 0.30;
	double rate_2 = 0.50;
	double rate_3 = 0.80;
	double rate_4 = 1.00;
	double amount = 0.0;

	//Calculations based on how many units are consumed
	if (unitsConsumed <= 100) {
		amount = unitsConsumed * rate_1;
	}
	else if (unitsConsumed <= 200) {
		amount = ((unitsConsumed - 100) * rate_2) + (100 * rate_1);
	}
	else if (unitsConsumed <= 300) {
		amount = ((unitsConsumed - 200) * rate_3) + (100 * rate_2) + (100 * rate_1);
	}
	else {
		amount = ((unitsConsumed - 300) * rate_4) + (100 * rate_3) + (100 * rate_2) + (100 * rate_1);
	}
	return amount; 
}

int main() {
	cout << "Auckland Power - Customer Bill Generator\n\n";
	cout << "****************************************\n\n";

	int customerNumber;
	int unitsConsumed;
	string customerName;

	//This part of the program is asking for customers details
	cout << "Enter Customer Number ";
	cin >> customerNumber;
	cout << "Enter Customer Name ";
	cin >> customerName;
	cout << "Enter Units Consumed ";
	cin >> unitsConsumed;
	cout << "\n";

	//This is where the bill gets calculated
	double amount = calculateBill(unitsConsumed);

	//Generation of the bill is done here and displayed for the customer
	cout << "Auckland Power - Customer " << customerNumber << endl << endl;
	cout << "************** " << endl <<endl;

	cout << "\nCustomer Name: " << customerName << endl << endl;

	cout << "Customer Number: " << customerNumber << endl << endl;

	cout << "Consumed Units: " << unitsConsumed << endl << endl;

	cout << "Amount: " << amount << endl << endl;

	cout << "****************" << endl;

	return(0);
}