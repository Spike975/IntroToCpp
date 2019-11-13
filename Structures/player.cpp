#include "player.h"

bool addItem(player * recepient, item gift) {
	if (!hasItem(recepient, gift.ID) {

	}
	return false;
}


bool hasItem(player * holder, int itemID) {
	for (int i = 0; i < 50; i++) {
		if ((*holder).inventory[i].item == itemID) {
			return true;
		}
	}
	return false;
}

float totalValue(player * holder) {
	int total = 0;
	for (int i = 0; i < 50; i++) {
		total += (*holder).inventory[i].value;
	}
	return total;
}