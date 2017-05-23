#ifndef _BRIDGE_H_
#define _BRIDGE_H_
#include <memory>

class AbstractRoad {
	public:
		virtual void Run() = 0;
		virtual ~AbstractRoad(){}
};

class SpeedWay:public AbstractRoad{
	public:
		void Run();
};

class StreetWay:public AbstractRoad{
	public:
		void Run();
};

class AbstractCar{
	public:
		virtual void Run() = 0;
		virtual ~AbstractCar(){}
};

class Car:public AbstractCar{
	public:
		Car(std::shared_ptr<AbstractRoad> abstractroad):road(abstractroad){}
		virtual void Run();
	private:
		std::shared_ptr<AbstractRoad> road;

};

class Bus:public AbstractCar{
	public:
		Bus(std::shared_ptr<AbstractRoad> abstractroad):road(abstractroad){}
		virtual void Run();
	private:
		std::shared_ptr<AbstractRoad> road;
};

#endif 
