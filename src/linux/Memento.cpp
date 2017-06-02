#include <iostream>
#include <memory>
#include <Memento.h>

Memento::Memento():state(""){}

Memento::Memento(std::string stat):state(stat){}

std::string Memento::getState(){
	return state;
}

void Memento::setState(std::string stat){
	state = stat;
}

Originator::Originator():state(""){}

std::string Originator::getState(){
	return state;
}

void Originator::setState(std::string state){
	this->state = state;
}

Memento Originator::createMemento(){
	return Memento(this->state);  
}

void Originator::restoreMemento(Memento memento){
	this->setState(memento.getState());
}

Memento Caretaker::getMemento(){
	return memento;
}

void Caretaker::setMemento(Memento memento){
	this->memento = memento;
}
