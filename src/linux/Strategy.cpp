#include <Strategy.h>
#include <iostream>


void ConcreteStrategyA::algrithmInterface(){
	std::cout << "test ConcreteStrategyA....." << std::endl;
}

void ConcreteStrategyB::algrithmInterface()
{
	std::cout << "test ConcreteStrategyB....." << std::endl;
}

Context::Context(std::shared_ptr<Strategy> stg):pStrategy(stg){

}

Context::~Context(){

}
void Context::doAction()
{
	pStrategy->algrithmInterface();
}

