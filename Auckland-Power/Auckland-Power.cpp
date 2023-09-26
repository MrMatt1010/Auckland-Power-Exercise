// Auckland-Power.cpp : 
//

#include <iostream>
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
	std::cout << "Auckland Power - Customer Bill Generator\n\n";
	std::cout << "****************************************\n\n";

	int customerNumber;
	int unitsConsumed;
	std::string customerName;

	//This part of the program is asking for customers details
	std::cout << "Enter Customer Number ";
	std::cin >> customerNumber;
	std::cout << "Enter Customer Name ";
	std::cin >> customerName;
	std::cout << "Enter Units Consumed ";
	std::cin >> unitsConsumed;
	std::cout << "\n";



}