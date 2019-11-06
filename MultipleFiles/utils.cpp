#include "utils.h"
#include <iostream>
#include <cmath>

int mult(int a, int b) {
	return a * b;
}
int divd(int a, int b) {
	return a / b;
}
int sqr(int a) {
	return a * a;
}
int sumThree(int a, int b, int c) {
	return a + b + c;
}
int min(int a, int b) {
	return (a < b) ? a : b;
}
int max(int a, int b) {
	return (a > b) ? a : b;
}
int clamp(int a, int b, int c) {
	return max(a, min(b, c));
}
float decimal(int a, int b) {
	return (a * 1.0f)/b;
}
float distance(float x1, float y1, float x2, float y2) {
	return sqrtf((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
float arival(float x1, float y1, float x2, float y2, float t) {
	return sqrtf((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1)) / t;
}
float linearInter(float a, float b, float c) {
	return a + (b-a)*c;
}
void printHello() {
	std::cout << "Hello Functions" << std::endl;
}
void pairPrinting(int a, int b) {
	std::cout << a << ", " << b << std::endl;
}