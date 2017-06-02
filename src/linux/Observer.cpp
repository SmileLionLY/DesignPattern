#include <Observer.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <memory>

void ConcreteObserverA::update(std::shared_ptr<Subject> pSubject)
{
	state = pSubject->getState();
	std::cout << "The ConcreteObserverA is " << state << std::endl;
}

void ConcreteObserverB::update(std::shared_ptr<Subject> pSubject)
{
	state = pSubject->getState();
	std::cout << "The ConcreteObserverB is " << state << std::endl;
}

void Subject::attach(std::shared_ptr<Observer> pObserver)
{
	list.push_back(pObserver);
	std::cout << "Attach an Observer\n";
}

void Subject::detach(std::shared_ptr<Observer> pObserver)
{
	std::list<std::shared_ptr<Observer>>::iterator iter;
	iter = find(list.begin(),list.end(),pObserver);
	if(iter != list.end())
	{
		list.erase(iter);
	}
	std::cout << "Detach an Observer\n";
}

void Subject::notify()
{
	std::list<std::shared_ptr<Observer>>::iterator iter = list.begin();
	for(;iter != list.end();iter++)
	{
		(*iter)->update(shared_from_this());
	}
}

std::string Subject::getState()
{
	return state;
}

void Subject::setState(std::string state)
{
	this->state = state;
}

