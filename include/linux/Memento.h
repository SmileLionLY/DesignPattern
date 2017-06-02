#ifndef _MEMENTO_H_
#define _MEMENTO_H_

#include <iostream>  
#include <string>  
#include <memory>

class Memento {  
	public:  
		Memento();

		Memento(std::string stat);

		std::string getState();

		void setState(std::string stat);
	private:  
		std::string state;  

};  


class Originator {  
	public:  
		Originator();  

		std::string getState();

		void setState(std::string state); 

		Memento createMemento();

		void restoreMemento(Memento memento);  
	private :  
		std::string state;  
};  

class Caretaker {  
	private :  
		Memento memento;  
	public :  
		Memento getMemento();

		void setMemento(Memento memento);
};  

#endif
