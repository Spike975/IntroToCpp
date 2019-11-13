#pragma once

struct player {
	float health;
	float attack;
	float defense;
	float xp;
	item inventory[50];
};
struct zombie {
	float health;
	float attack;
	float defense;
};
struct item{
	int ID;
	int value;
};
struct highScoreData{
	int highScore;
	int timeToComplete;
};
bool addItem(player * recepient, item gift);


bool hasItem(player * holder, int itemID);

float totalValue(player * holder);