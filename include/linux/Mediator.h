#ifndef _MEDIATOR_H_
#define _MEDIATOR_H_

#include <string>
#include <memory>
class Colleage;
class Mediator
{
	public:
		virtual ~Mediator(){}
		virtual void doActionFromAtoB() = 0;
		virtual void doActionFromBtoA() = 0;
	protected:
		Mediator(){}
	private:
};

class ConcreteMediator:public Mediator
{
	public:
		ConcreteMediator() {}
		ConcreteMediator(std::shared_ptr<Colleage> clgA,std::shared_ptr<Colleage> clgB);
		~ConcreteMediator(){}
		void setConcreteColleageA(std::shared_ptr<Colleage> clgA);
		void setConcreteColleageB(std::shared_ptr<Colleage> clgB);
		std::shared_ptr<Colleage> getConcreteColleageA();
		std::shared_ptr<Colleage> getConcreteColleageB();
		void introColleage(std::shared_ptr<Colleage> clgA,std::shared_ptr<Colleage> clgB);
		void doActionFromAtoB();
		void doActionFromBtoA();
	private:
		std::shared_ptr<Colleage> pclgA;
		std::shared_ptr<Colleage> pclgB;
};
class Colleage
{
	public:
		virtual ~Colleage(){}
		virtual void action() = 0;
		virtual void setState(const std::string sdt) = 0;
		virtual std::string getState() = 0;
	protected:
		Colleage(){}
		Colleage(std::shared_ptr<Mediator> mdt):pmdt(mdt){}
		std::shared_ptr<Mediator> getMediator(){
			return pmdt;
		}
	private:
		std::shared_ptr<Mediator> pmdt;
};
class ConcreteColleageA:public Colleage
{
	public:
		ConcreteColleageA(){}
		ConcreteColleageA(std::shared_ptr<Mediator> mdt):Colleage(mdt){}
		~ConcreteColleageA(){}
		void action();
		void setState(const std::string sdt);
		std::string getState();
	private:
		std::string sdt;
};

class ConcreteColleageB:public Colleage
{
	public:
		ConcreteColleageB(){}
		ConcreteColleageB(std::shared_ptr<Mediator> mdt):Colleage(mdt){}
		~ConcreteColleageB(){}
		void action();
		void setState(const std::string sdt);
		std::string getState();
	protected:
	private:
		std::string sdt;
};

#endif
