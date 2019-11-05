#include <iostream>
#include <array>
void main() {
	//int choice, input, min;
	//std::cout << "Please enter number for the sequence: " << std::endl;
	//std::cin >> choice;
	//for (int i = 0; i < choice; i++) {
	//	std::cout << "Please enter a number: " << std::endl;
	//	std::cin >> input;
	//	if (i == 0) {
	//		min = input;
	//	}
	//	else if(min > input){
	//		min = input;
	//	}
	//}
	//std::cout << "Lowest number: " << min << std::endl;

	float result, inputOne, inputTwo;
	char operand = '0';
	bool first = false;
	while (operand != 'e'){
		std::cout << "OPERATOR" << std::endl;
		std::cin >> operand;
		if (operand == '+'&&!first) {
			std::cout << "FIRST OPERAND" << std::endl;
			std::cin >> inputOne;
			std::cout << "SECOND OPERAND" << std::endl;
			std::cin >> inputTwo;
			result = inputOne + inputTwo;
			std::cout << "RESULT\n" << result << std::endl;
			first = true;
		}
		else if (operand == '+' && first) {
			std::cout << "SECOND OPERAND" << std::endl;
			std::cin >> inputTwo;
			result += inputTwo;
			std::cout << "RESULT\n" << result << std::endl;
		}
		else if (operand == '-' && !first) {
			std::cout << "FIRST OPERAND" << std::endl;
			std::cin >> inputOne;
			std::cout << "SECOND OPERAND" << std::endl;
			std::cin >> inputTwo;
			result = inputOne - inputTwo;
			std::cout << "RESULT\n" << result << std::endl;
			first = true;
		}
		else if (operand == '-' && first) {
			std::cout << "SECOND OPERAND" << std::endl;
			std::cin >> inputTwo;
			result -= inputTwo;
			std::cout << "RESULT\n" << result << std::endl;
		}
		else if (operand == '*' && !first) {
			std::cout << "FIRST OPERAND" << std::endl;
			std::cin >> inputOne;
			std::cout << "SECOND OPERAND" << std::endl;
			std::cin >> inputTwo;
			result = inputOne * inputTwo;
			std::cout << "RESULT\n" << result << std::endl;
			first = true;
		}
		else if (operand == '*' && first) {
			std::cout << "SECOND OPERAND" << std::endl;
			std::cin >> inputTwo;
			result *= inputTwo;
			std::cout << "RESULT\n" << result << std::endl;
		}
		else if (operand == '/' && !first) {
			std::cout << "FIRST OPERAND" << std::endl;
			std::cin >> inputOne;
			std::cout << "SECOND OPERAND" << std::endl;
			std::cin >> inputTwo;
			result = inputOne / inputTwo;
			std::cout << "RESULT\n" << result << std::endl;
			first = true;
		}
		else if (operand == '/' && first) {
			std::cout << "SECOND OPERAND" << std::endl;
			std::cin >> inputTwo;
			result /= inputTwo;
			std::cout << "RESULT\n" << result << std::endl;
		}
		else if (operand == 'c' || operand == 'C') {
			result = 0;
			std::cout << "RESULT\n" << result << std::endl;
		}

	}

	while (true)
	{

	}
}