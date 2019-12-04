#pragma once
#include <iostream>

class ShallowCopy {
public:
	std::string *myStringPointer;
	std::string myShallowString;
	int simpleInt;

	ShallowCopy();
	~ShallowCopy();
};

class DeepCopy {
public:
	std::string *myStringPointer;
	std::string myShallowString;
	int simpleInt;

	DeepCopy();
	//Here we overload the Assignment operator to perform a custom copy
	DeepCopy& operator=(const DeepCopy& rhs);

	~DeepCopy();
};