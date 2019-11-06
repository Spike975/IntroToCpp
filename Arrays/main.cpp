#include <iostream>

void printNumbers(int numbers[], size_t size);
void reverseArr(int numbers[], size_t size);
void sortArrDec(int numbers[], size_t size);
void sortArrAcc(int numbers[], size_t size);
void getUniqueElem(int arr[], int numb[], size_t size);
bool uniqueArray(int numbers[], size_t size);
int sumArr(int numbers[], size_t size);
int largestValue(int numbers[], size_t size);
int smallestValue(int numbers[], size_t size);
int findIndex(int numbers[], size_t size, int value, int start);
int countElement(int numbers[], size_t size, int value, int start);

int main() {
	int source[9] = { 10,3,60,9,10,38,7,6,15 };
	int arr[9];
	//printNumbers(arr, 6);
	//std::cout << countElement(arr, 6,1,0) << std::endl;
	//if (uniqueArray(arr,6)) {
	//	std::cout << "Yes" << std::endl;
	//}
	//else {
	//	std::cout << "No" << std::endl;
	//}
	//sortArrAcc(arr, 7);
	getUniqueElem(source, arr, 9);
	for (int i : arr) {
		std::cout << i << std::endl;
	}
	system("pause");
	return 0;
}
void printNumbers(int numbers[], size_t size) {
	for (int i = 0; i < size; i++) {
		std::cout << numbers[i] << std::endl;
	}
}
void reverseArr(int numbers[], size_t size) {
	if (size %2 != 1) {
		for (int i = 0; i < size / 2; i++) {
			numbers[i] += numbers[size - 1 - i];
			numbers[size - 1 - i] = numbers[i] - numbers[size - 1 - i];
			numbers[i] = numbers[i] - numbers[size - 1 - i];
		}
	}
	else {
		for (int i = 0; i < (size / 2)-1; i++) {
			numbers[i] += numbers[size - 1 - i];
			numbers[size - 1 - i] = numbers[i] - numbers[size - 1 - i];
			numbers[i] = numbers[i] - numbers[size - 1 - i];
		}
	}
}
void sortArrDec(int numbers[], size_t size) {
	for (int i = 0; i < size; i++) {
		int maxNumb = numbers[i];
		for (int x = i + 1; x < size; x++) {
			if (maxNumb < numbers[x]) {
				numbers[x] += maxNumb;
				maxNumb = numbers[x] - maxNumb;
				numbers[x] -= maxNumb;
			}
		}
		numbers[i] = maxNumb;
	}
}
void sortArrAcc(int numbers[], size_t size) {
	for (int i = 0; i < size; i++) {
		int minNumb = numbers[i];
		for (int x = i + 1; x < size; x++) {
			if (minNumb > numbers[x]) {
				numbers[x] += minNumb;
				minNumb = numbers[x] - minNumb;
				numbers[x] -= minNumb;
			}
		}
		numbers[i] = minNumb;
	}
}
void getUniqueElem(int arr[], int numb[], size_t size) {
	int j = 0;
	for (int i = 0; i < size; i++) {
		bool unique = true;
		for (int x = 0; x < size; x++) {
			if (arr[i] == arr[x] && i != x) {
				unique = false;
				break;
			}
		}
		if (unique) {
			numb[j] = arr[i];
			j++;
		}
	}
	if (j < size * 3) {
		for (; j < size * 3; j++) {
			numb[j] = 0;
		}
	}
}
bool uniqueArray(int numbers[], size_t size) {
	for (int i = 0; i < size; i++) {
		for (int x = i + 1; x < size; x++) {
			if (numbers[i] == numbers[x]) {
				return false;
			}
		}
	}
	return true;
}
int sumArr(int numbers[], size_t size) {
	int numb = 0;
	for (int i = 0; i < size; ++i) {
		numb += numbers[i];
	}
	return numb;
}
int largestValue(int numbers[], size_t size) {
	int maxNumb = numbers[0];
	for (int i = 1; i < size; i++) {
		if (maxNumb < numbers[i]) {
			maxNumb = numbers[i];
		}
	}
	return maxNumb;
}
int smallestValue(int numbers[], size_t size) {
	int minNumb = numbers[0];
	for (int i = 1; i < size; i++) {
		if (minNumb > numbers[i]) {
			minNumb = numbers[i];
		}
	}
	return minNumb;
}
int findIndex(int numbers[], size_t size, int value, int start) {
	for (; start < size; start++) {
		if (numbers[start] == value) {
			return start;
		}
	}
	return -1;
}
int countElement(int numbers[], size_t size, int value, int start) {
	int total = 0;
	for (; start < size; start++) {
		if (numbers[start] == value) {
			total++;
		}
	}
	return total;
}