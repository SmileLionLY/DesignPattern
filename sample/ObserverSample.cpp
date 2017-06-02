#include <Observer.h>
#include <iostream>
#include <string>
#include <memory>


int main()
{
	std::shared_ptr<Observer> p1(new ConcreteObserverA());
	std::shared_ptr<Observer> p2(new ConcreteObserverB());
	std::shared_ptr<Observer> p3(new ConcreteObserverA());

	std::shared_ptr<Subject> pSubject(new ConcreteSubjectA());
	pSubject->attach(p1);
	pSubject->attach(p2);
	pSubject->attach(p3);

	pSubject->setState("old");

	pSubject->notify();

	std::cout << "-------------------------------------" << std::endl;
	pSubject->setState("new");

	pSubject->detach(p3);
	pSubject->notify();

	return 0;
}
