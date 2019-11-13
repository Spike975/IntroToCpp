#pragma once

class PiggyBank {
private:
	float currentBalance;
public:
	void deposit(float net);

	float withdraw();

	float balance();
};