#pragma once
#include <iostream>

struct Vector2{
	int x;
	int y;
};

template<typename T>
class gameObject
{
public:
	bool enabled;
	T* object;
	Vector2 position;
	
	gameObject() {
		position.x = 0;
		position.y = 0;
	}
	gameObject(int x, int y) {
		*position->x = x;
		*position->y = y;
	}
	gameObject(Vector2 pos) {
		position = pos;
	}

	void update(float delta) {
		
	}
	void render() {
		std::cout << position.x << ", " << position.y << std::endl;
	}

	void setPosition(int x, int y) {
		position.x = x;
		position.y = y;
	}
	void setPosition(Vector2 pos) {
		position = pos;
	}
	void changeX(int x) {
		position.x = x;
	}
	void changeY(int y) {
		position.y = y;
	}
private:
};