#ifndef _STRATEGY_H_
#define _STRATEGY_H_

#include <memory>

class Strategy
{
	public:
		Strategy(){}
		virtual ~Strategy(){}
		virtual void algrithmInterface() = 0;
};

class ConcreteStrategyA:public Strategy
{
	public:
		ConcreteStrategyA(){}
		virtual ~ConcreteStrategyA(){}
		void algrithmInterface();
};

class ConcreteStrategyB:public Strategy
{
	public:
		ConcreteStrategyB();
		virtual ~ConcreteStrategyB();
		void algrithmInterface();
};

class Context
{
	public:
		Context(std::shared_ptr<Strategy> stg);
		~Context();
		void doAction();
	private:
		std::shared_ptr<Strategy> pStrategy;
};


#endif
