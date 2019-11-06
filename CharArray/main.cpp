#include <iostream>
#include <cstring>

void greeting();
void favColor();
void toUpper();
void toLower();
void removeSpace();
void subString();
void stringLength();
void stringReversal();

int main() {
	stringReversal();
	system("pause");
}

void greeting() {
	char name[50];
	std::cout << "Please enter your name:" << std::endl;
	std::cin.getline(name, 50);

	std::cout << "Greetings " << name << "!" << std::endl;
}
void favColor() {
	char color[50];
	std::cout << "Please enter your favorite color:" << std::endl;
	std::cin.getline(color, 50);

	if (strcmp(color, "red\0") == 0) {
		std::cout << "Red like roses?" << std::endl;
	}
	else if (strcmp(color, "blue\0") == 0) {
		std::cout << "Blue, jut like the sky!" << std::endl;
	}
	else if (strcmp(color, "yellow\0") == 0) {
		std::cout << "Does that mean you like bananas?" << std::endl;
	}
	else {
		std::cout << "I don\'t think I know what color you\'re refering to..." << std::endl;
	}
}
void toUpper() {
	char input[50];
	std::cout << "Enter words:" << std::endl;
	std::cin.getline(input, 50);
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] > 96 && input[i] < 123) {
			input[i] = (char)(input[i] - 32);
		}
	}
	std::cout << input << std::endl;
}
void toLower() {
	char input[50];
	std::cout << "Enter words:" << std::endl;
	std::cin.getline(input, 50);
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] > 40 && input[i] < 91) {
			input[i] = (char)(input[i] + 32);
		}
	}
	std::cout << input << std::endl;
}
void removeSpace() {
	char input[50];
	std::cout << "Enter a sentence" << std::endl;
	std::cin.getline(input, 50);
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] == ' ') {
			for (int x = i; x < strlen(input); x++) {
				if (input[x] != '\0') {
					input[x] = input[x + 1];
				}
				else {
					break;
				}
			}
		}
	}
	std::cout << input << std::endl;
}
void subString() {
	char input[50];
	size_t start;
	size_t end;
	std::cout << "Enter a sentence" << std::endl;
	std::cin.getline(input, 50);
	std::cout << "Where would you like to start?" << std::endl;
	std::cin >> start;
	std::cout << "Where would you like to end?" << std::endl;
	std::cin >> end;

	for (; start <= end; start++) {
		std::cout << input[start];
	}
	std::cout << "\n";
}
void stringLength() {
	char input[50];
	std::cout << "Enter a sentence" << std::endl;
	std::cin.getline(input, 50);
	std::cout << strlen(input)<<"\n";
}
void stringReversal() {
	char input[50];
	int length = 0;
	std::cout << "Enter a sentence" << std::endl;
	std::cin.getline(input, 50);
	for (int i = 0; i < 50; i++) {
		if (input[i] != '\0') {
			length++;
		}
		else {
			break;
		}
	}

	for (int i = 0; i <( length)/2; i++) {
		char x = input[i];
		input[i] = input[length - i-1];
		input[length - i-1] = x;
	}
	std::cout << input << "\n";
}