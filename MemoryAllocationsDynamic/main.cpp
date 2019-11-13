#include <iostream>

void printFloats(float * arr, int size);
void numberLove();
int arraySum(int * arr, int size);
int * zeroArray(size_t size);
int * duplicateArray(int * origArray, size_t size);
int * integerSubarray(int * originalArray, int start, int end);
char * pointerElement(char * chars, size_t size, char find);

int main() {
	int * arr = new int[16];
	float * arrF = new float[16];
	char * charArr = new char[6];
	charArr[0] = 'S';
	charArr[1] = 'm';
	charArr[2] = 'i';
	charArr[3] = 't';
	charArr[4] = 'h';
	charArr[5] = '\0';


	int * test = &charArr[2];

	for (int i = 0; i < 16; i++) {
		arr[i] = i;
		arrF[i] = i;
	}

		std::cout << &test << std::endl;
	/*for (int i = 0; i < 16; i++) {
		std::cout << &arr[i] << std::endl;
	}*/

	delete[] arr;
	delete[] arrF;
	return 0;
}
void printFloats(float * arr, int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << std::endl;
	}
}
int arraySum(int * arr, int size) {
	int total = 0;
	for (size_t i = 0; i < size; i++) {
		total += arr[i];
	}
	return total;
}
int * zeroArray(size_t size) {
	int * arr = new int[size];

	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}
	return arr;
}
int * duplicateArray(int * origArray, size_t size) {
	int * arr = new int[size];

	for (int i = 0; i < size; i++) {
		arr[i] = origArray[i];
	}

	return arr;
}
void numberLove() {
	int length;
	int input;
	std::cout << "Howdy! How many numbers do you have?" << std::endl;
	std::cin >> length;
	int * arr = new int[length];
	for (int i = 0; i < length; i++) {
		std::cout << "Okay, what’s number " << i + 1 << "?" << std::endl;
		std::cin >> input;
		arr[i] = input;
	}
	std::cout << "Okay, you have the numbers:";
	for (int i = 0; i < length; i++) {
		std::cout << arr[i];
	}

	delete[] arr;
}
int * integerSubarray(int * originalArray, int start, int end) {
	int * arr = new int[end - start];
	for (int i = 0; i < end - start; i++) {
		arr[i] = originalArray[i + start];
	}
	return arr;
}
char * pointerElement(char * chars, size_t size, char find) {

	for (int i = 0; i < size; i++) {
		if (chars[i] == find) {
			return &chars[i];
		}
	}
	return nullptr;
}
