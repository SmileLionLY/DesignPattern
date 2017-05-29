#include <Facade.h>
#include <iostream>

using namespace std;

Subsystem1::Subsystem1()
{}

Subsystem1::~Subsystem1()
{}

void Subsystem1::operation()
{
	cout << "Subsystem1::Operation" << endl;
}

Subsystem2::Subsystem2()
{}

Subsystem2::~Subsystem2()
{}

void Subsystem2::operation()
{
	cout << "Subsystem2::Operation" << endl;
}

Facade::Facade():subsys1(new Subsystem1),subsys2(new Subsystem2)
{

}

Facade::~Facade()
{
}

void Facade::operationWrapper()
{
	subsys1->operation();
	subsys2->operation();
}
