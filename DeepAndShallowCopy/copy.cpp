#include "copy.h"

ShallowCopy::ShallowCopy() {

}
ShallowCopy::~ShallowCopy() {

}
DeepCopy::DeepCopy() {

}
DeepCopy& DeepCopy::operator=(const DeepCopy & rhs)
{
	// TODO: insert return statement here
	myShallowString = rhs.myShallowString;// Easy shallow copy;
	myStringPointer = new std::string(*rhs.myStringPointer);


	simpleInt = rhs.simpleInt;
	return *this;
}
DeepCopy::~DeepCopy() {

}