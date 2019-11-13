#include <iostream>
#include "television.h"

void Television::increaseVolume(){
	currentVolume++;
}
void Television::decreaseVolume() {
	currentVolume--;
}

int Television::voulume() {
	std::cout << currentVolume << "\n";
	return currentVolume;
}

void Television::increaseChannel() {
	currentChannel++;
}
void Television::decreaseChannel() {
	currentChannel--;
}

int Television::channel() {
	std::cout << currentChannel << "\n";
	return currentChannel;
}