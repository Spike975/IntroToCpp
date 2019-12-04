#include <iostream>
#include "standAloneFunctions.h"
#include "gameobject.h"

void product(float a, float b, float &product);
void swap(float &a, float &b);

int main(){
	bool done = false;
	gameObject<char> Ninja;
	float numb = 0;
	float a = 2;
	float j = 15;
	float & res = numb;

	product(a, j, res);
	std::cout << res << std::endl;
	swap(a, j);
	std::cout << a << std::endl;
	std::cout << j << std::endl;

	/*while (!done) {
		Ninja.render();
		if () {

		}
	}*/

	return 0;
}

void product(float a, float b, float &product) {
	product = a + b;
}
void swap(float &a, float &b) {
	a = a + b;
	b = a - b;
	a = a - b;
}