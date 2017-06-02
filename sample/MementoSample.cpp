#include <memory>
#include <Memento.h>
#include <iostream>

int main (int argc, char *argv[])     
{  
	Originator originator;  
	originator.setState("状态1");  
	std::cout << "初始状态:" << originator.getState() << std::endl;  
	Caretaker caretaker;  
	caretaker.setMemento(originator.createMemento());  
	originator.setState("状态2");  
	std::cout << "改变后状态:" << originator.getState() << std::endl;  

	originator.restoreMemento(caretaker.getMemento());  
	std::cout << "恢复后状态:" << originator.getState() << std::endl;  
}  
