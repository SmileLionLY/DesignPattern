#ifndef _STATE_H_
#define _STATE_H_

#include <iostream>
#include <memory>

class Worker;

//状态类
class State
{
	public:
		virtual void doing(std::shared_ptr<Worker>){}
		virtual ~State(){}
};

//工作状态
class WorkingState: public State
{
	public:
		void doing(std::shared_ptr<Worker> pWorker);
};

//休息状态
class SleepingState: public State
{
	public:
		void doing(std::shared_ptr<Worker> pWorker);
};
//其他状态
class OtherState : public State
{
	public:
		void doing(std::shared_ptr<Worker> pWorker);
};

//工人类
class Worker
{
	public:
		Worker();
		void setState(std::shared_ptr<State> pState);
		double getHour();
		void setHour(double hour);
		void requestDoing();
	private:
		std::shared_ptr<State> pState;
		double hour;
};
#endif
