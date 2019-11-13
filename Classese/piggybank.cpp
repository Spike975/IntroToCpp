#include <iostream>
#include "piggybank.h"

void PiggyBank::deposit(float net) {
	currentBalance += net;
}

float PiggyBank::withdraw() {
	currentBalance = 0;
	return balance();
}

float PiggyBank::balance() {
	std::cout << currentBalance << "\n";
	return currentBalance;
}