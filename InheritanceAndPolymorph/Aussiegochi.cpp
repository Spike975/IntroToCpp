#include "Aussiegochi.h"

void feedAussie(Aussiegochi& aus) {
	aus.hunger += 30;
	aus.happiness += 5;
	if (aus.hunger > 100) {
		aus.hunger = 100;
	}
	if (aus.happiness > 100) {
		aus.happiness = 100;
	}
}
void waterAussie(Aussiegochi& aus) {
	aus.thirst += 25;
	aus.happiness += 5;
	if (aus.thirst > 100) {
		aus.thirst = 100;
	}
	if (aus.happiness > 100) {
		aus.happiness = 100;
	}
}
void abuseAussie(Aussiegochi& aus) {
	aus.sanity += 25;
	aus.happiness -= 5;
	if (aus.sanity > 100) {
		aus.sanity = 100;
	}
	if (aus.happiness < 0) {
		aus.happiness = 0;
	}
}
void coddleAussie(Aussiegochi& aus) {
	aus.sanity -= 10;
	aus.happiness += 25;
	if (aus.sanity < 0) {
		aus.sanity = 0;
	}
	if (aus.happiness > 100) {
		aus.happiness = 100;
	}
}