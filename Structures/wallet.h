#pragma once

struct piggybank
{
	int oneDollars, twoDollars, fiveDollars, quarters, dimes, nickels, pennies;
};


float calcPiggybankNotes(piggybank piggy);

float calcPiggybankCoins(piggybank piggy);

float calcPiggybankTotal(piggybank piggy);