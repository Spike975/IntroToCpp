#include <iostream>
#include <stdlib.h> 
#include <time.h>
#include "utils.h"

using std::cout;
using std::endl;
using std::cin;

int sum(int a, int b) {
	return a + b;
}
int sub(int a, int b);
void numbGuess();
void upperLower();
int main() {
	//upperLower();
	numbGuess();
	system("pause");
	return 0;
}
void upperLower() {
	char input;
	cout << "Please enter a charecter:" << endl;
	cin >> input;
	int charNumb = input;

	if (input > 96 && input < 123) {
		cout << "To Upper:\n" << (char)(input - 32 )<< endl;
		cout << "To Lower:\n" << input << endl;
	}
	else if(input > 60 && input < 91) {
		cout << "To Upper:\n" << input << endl;
		cout << "To Lower:\n" << (char)(input + 32) << endl;
	}
	else {
		cout << "To Upper:\n" << input << endl;
		cout << "To Lower:\n" << input << endl;
	}

}
void numbGuess() {
	int numb, guess;
	int nMin = 1;
	int nMax = 100;
	int guesses = 0;

	srand(time(NULL));
	numb = rand() % 100 + 1;
	do {
		system("CLS");
		cout << "Please enter a number between " << nMin << "-" << nMax << endl;
		cin >> guess;
		guesses++;
		if (guess == numb) {
			cout << "Congrats, you guessed the correct number!" << endl;
		}
		else if (guess > numb) {
			cout << "Not quite, your number seems to be a bit high." << endl;
			nMax = min(guess, nMax);
		}
		else if (guess < numb) {
			cout << "I think the number is a bit larger." << endl;
			nMin = max(guess, nMin);
		}
		if (guesses >= 5 && guess != numb) {
			if (guesses < 8) {
				cout << "It seems like you only have " << 8 - guesses << " left." << endl;
			}
			else {
				cout << "It seems like you didn\'t guess the number.\nBetter luck next time" << endl;
			}
		}
	} while (numb != guess && guesses < 8);
}
int sub(int a, int b) {
	return a - b;
}