#ifndef _OBSERVER_H_
#define _OBSERVER_H_

#include <string>
#include <list>
#include <memory>

class Subject;

class Observer
{
	public:
		virtual ~Observer(){}
		virtual void update(std::shared_ptr<Subject> )=0;
};

class ConcreteObserverA : public Observer
{
	public:
		ConcreteObserverA(){}
		~ConcreteObserverA(){}
		virtual void update(std::shared_ptr<Subject> );
	private:
		std::string state;
};

class ConcreteObserverB : public Observer
{
	public:
		ConcreteObserverB(){}
		~ConcreteObserverB(){}
		virtual void update(std::shared_ptr<Subject> );
	private:
		std::string state;
};

class Subject:public std::enable_shared_from_this<Subject>
{
	public:
		virtual ~Subject(){}
		virtual void notify();
		virtual void attach(std::shared_ptr<Observer> );
		virtual void detach(std::shared_ptr<Observer> );
		virtual std::string getState();
		virtual void setState(std::string state);
	protected:
		Subject(){}
	private:
		std::string state;
		std::list<std::shared_ptr<Observer>> list;
};

class ConcreteSubjectA : public Subject
{
	public:
		ConcreteSubjectA(){}
		~ConcreteSubjectA(){}
};

class ConcreteSubjectB : public Subject
{
	public:
		ConcreteSubjectB(){}
		~ConcreteSubjectB(){}
};

#endif


