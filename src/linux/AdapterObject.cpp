#include <AdapterObject.h>
#include <iostream>

void AdapteeObject::SpecificRequest(){
	std::cout << "Called SpecificRequest" << std::endl;
}

AdapterObject::AdapterObject():adapteeObject(new AdapteeObject){

}

void AdapterObject::Request(){
	adapteeObject->SpecificRequest();
}
