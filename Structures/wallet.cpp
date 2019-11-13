#include <iostream>
#include "wallet.h"

float calcPiggybankNotes(piggybank piggy) {
	return (piggy.fiveDollars * 5) + (piggy.oneDollars) + (piggy.twoDollars * 2);
}

float calcPiggybankCoins(piggybank piggy) {
	return (piggy.dimes*.1f) + (piggy.nickels*.05f) + (piggy.pennies*.01f) + (piggy.quarters*.25f);
}

float calcPiggybankTotal(piggybank piggy) {
	return (piggy.dimes*.1f) + (piggy.nickels*.05f) + (piggy.pennies*.01f) + (piggy.quarters*.25f) + (piggy.fiveDollars * 5) + (piggy.oneDollars) + (piggy.twoDollars * 2);
}