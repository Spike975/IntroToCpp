#include "copy.h"
void pause();
void shallow();
void deep();

int main() {
	


	return 0;
}
void pause() {
	std::cout << "Press enter to continue" << std::endl;
	while (std::cin.get() != '\n');
}
void shallow() {
	//Initialize an original object.
	ShallowCopy test1;
	test1.myShallowString = "Test Shallow String";
	test1.myStringPointer = new std::string("Test Pointer To Heap");
	test1.simpleInt = 55;
	//output Original
	std::cout << "Original test1 Object" << std::endl;
	std::cout << test1.myShallowString.c_str() << std::endl;
	std::cout << (test1.myStringPointer)->c_str() << std::endl;
	pause();

	//Without a copy overload this is just a shallow copy.
	//Create a copy
	ShallowCopy test2;
	test2 = test1;

	std::cout << "Test 1 has been Shallow copied & Test2 looks fine" << std::endl;
	std::cout << test2.myShallowString.c_str() << std::endl;
	std::cout << (test2.myStringPointer)->c_str() << std::endl;
	pause();
	//Now make a change to test 1
	test1.myStringPointer->append(" Dogs and Cats");
	std::cout << "Test1 has been modified so what does Test2 look like" << std::endl;
	std::cout << "Test1=" << (test1.myStringPointer)->c_str() << std::endl;
	std::cout << "Test2=" << (test2.myStringPointer)->c_str() << std::endl;
	std::cout << "We see that the Test2 pointer is still pointing at Test1's memory" << std::endl;
	pause();
}
void deep() {
	//Initialize an original object.
	DeepCopy test1;
	test1.myShallowString = "Test Shallow String";
	test1.myStringPointer = new std::string("Test Pointer To Heap");
	test1.simpleInt = 55;
	//output Original
	std::cout << "Original test1 Object" << std::endl;
	std::cout << test1.myShallowString.c_str() << std::endl;
	std::cout << (test1.myStringPointer)->c_str() << std::endl;
	pause();

	//Without a copy overload this is just a shallow copy.
	//Create a copy
	DeepCopy test2;
	test2 = test1;

	std::cout << "Test 1 has been Shallow copied & Test2 looks fine" << std::endl;
	std::cout << test2.myShallowString.c_str() << std::endl;
	std::cout << (test2.myStringPointer)->c_str() << std::endl;
	pause();
	//Now make a change to test 1
	test1.myStringPointer->append(" Dogs and Cats");
	std::cout << "Test1 has been modified so what does Test2 look like" << std::endl;
	std::cout << "Test1=" << (test1.myStringPointer)->c_str() << std::endl;
	std::cout << "Test2=" << (test2.myStringPointer)->c_str() << std::endl;
	std::cout << "We see that the Test2 pointer has it's own data" << std::endl;
	pause();
}