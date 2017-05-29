#ifndef _FACADE_H_
#define _FACADE_H_
#include <memory>

class Subsystem1
{
	public:
		Subsystem1();
		~Subsystem1();
		void operation();
};

class Subsystem2
{
	public:
		Subsystem2();
		~Subsystem2();
		void operation();
};

class Facade
{
	public:
		Facade();
		~Facade();
		void operationWrapper();
	private:
		std::shared_ptr<Subsystem1> subsys1;
		std::shared_ptr<Subsystem2> subsys2;
};

#endif
