#include <Mediator.h>
#include <memory>
#include <string>

ConcreteMediator::ConcreteMediator(std::shared_ptr<Colleage> clgA, std::shared_ptr<Colleage> clgB):pclgA(clgA),pclgB(clgB){}


void ConcreteMediator::setConcreteColleageA(std::shared_ptr<Colleage> clgA){
	pclgA = clgA;
}

void ConcreteMediator::setConcreteColleageB(std::shared_ptr<Colleage> clgB){
	pclgB = clgB;
}

std::shared_ptr<Colleage> ConcreteMediator:: getConcreteColleageA(){
	return pclgA;
}

std::shared_ptr<Colleage> ConcreteMediator::getConcreteColleageB(){
	return pclgB;
}

void ConcreteMediator::introColleage(std::shared_ptr<Colleage> clgA,std::shared_ptr<Colleage> clgB){
	pclgA = clgA;
	pclgB = clgB;
}

void ConcreteMediator::doActionFromAtoB(){
	pclgB->setState(pclgA->getState());
}

void ConcreteMediator::doActionFromBtoA(){
	pclgA->setState(pclgB->getState());
}

void ConcreteColleageA::action(){
	(getMediator())->doActionFromAtoB();
}

void ConcreteColleageA::setState(const std::string sdt){
	this->sdt = sdt;
}

std::string ConcreteColleageA::getState(){
	return this->sdt;
}

void ConcreteColleageB::action(){
	(getMediator())->doActionFromBtoA();
}

void ConcreteColleageB::setState(const std::string sdt){
	this->sdt = sdt;
}

std::string ConcreteColleageB::getState(){
	return this->sdt;
}
