#include <memory>
#include <State.h>

//各个状态doing方法的实现
void WorkingState::doing(std::shared_ptr<Worker> pWorker)
{
	if(worker->getHour() > 8 && worker->getHour()  < 16)
		cout << "WorkingState!" << endl;
	else
	{
		worker->setState(new OtherState());
		worker->requestDoing();
	}
}

void SleepingState::doing(Worker* worker)
{
	if(worker->getHour()  >= 21 || worker->getHour()  < 5)
		cout << "SleepingState!" << endl;
	else
	{
		worker->setState(new OtherState());
		worker->requestDoing();

	}
}

void OtherState::doing(Worker* worker)
{
	if((worker->getHour() >= 5 && worker->getHour() < 8) 
			|| (worker->getHour() >= 16 && worker->getHour() < 21))
		cout << "SleepingState!" << endl;
	else if(worker->getHour() >= 21 || worker->getHour() < 5)
	{
		worker->setState(new SleepingState());
		worker->requestDoing();
	}
	else
	{
		worker->setState(new WorkingState());
		worker->requestDoing();
	}
}
//客户代码
