#include <Mediator.h>
#include <memory>
#include <iostream>

int main(int argc,char* argv[])
{
	std::shared_ptr<ConcreteMediator> m(new ConcreteMediator());
	std::shared_ptr<ConcreteColleageA> c1(new ConcreteColleageA(m));
	std::shared_ptr<ConcreteColleageB> c2(new ConcreteColleageB(m));
	m->introColleage(c1,c2);
	c1->setState("old");
	c2->setState("old");
	std::cout << c1->getState();
	c1->action();
	c2->action();
	std::cout << std::endl;
	c1->setState("new");
	c1->action();
	c2->action();
	std::cout << std::endl;
	c2->setState("old");
	c2->action();
	c1->action();
	return 0;

}
