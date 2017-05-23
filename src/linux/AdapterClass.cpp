#include <iostream>
#include <AdapterClass.h>
void AdapteeClass::SpecificRequest(){
	std::cout << "Called SpecificRequest" << std::endl;
}

void AdapterClass::Request(){
	this->SpecificRequest();
}


