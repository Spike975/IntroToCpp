#include <iostream>
#include "server.h"

int ask(char question[]) {
	int result;
	std::cout << question << std::endl;
	std::cin >> result;
	return result;
}

int main() {
	ServerBrowserService serv;
	bool game = true;
	char input[15];
	while (game) {
		std::cout << "What to do?" << std::endl;

		std::cin.getline(input, 15);
		if (input[0] == 'r') {
			ServerInfo temp;

			std::cout << "What is the current player count?" << std::endl;
			std::cin >> temp.currentPlayerCount;
			std::cout << "What is the max player count?" << std::endl;
			std::cin >> temp.maxPlayers;
			std::cout << "What is the ping?" << std::endl;
			std::cin >> temp.ping;
			std::cout << "What is the region ID?" << std::endl;
			std::cin >> temp.regionID;

			serv.registerServer(temp);
		}
		else if (input[0] == 'g') {
			bool empty = false;
			bool full = false;
			char inpu[50];

			std::cout << "Empty?\n";
			std::cin >> inpu;
			if (inpu[0] == 'y') {
				empty = true;
			}
			std::cout << "Full?\n";
			std::cin >> inpu;
			if (inpu[0] == 'y') {
				full = true;
			}

			std::cout << "There are " << serv.getServers(50, 100, 01, empty, full) << " servers that match your entry.\n";
		}
		else if (input[0] == 'p' && input[1] == 'i') {

		}
		else if (input[0] == 'p' && input[1] == 'l') {

		}
		else if (input[0] == 'd') {
			game = false;
		}
		else {
			std::cout << "I didn\'t quite get that...\n";
		}
		std::cin.clear();
	}

	return 0;
}