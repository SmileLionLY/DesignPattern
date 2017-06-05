#include <string>
#include <Command.h>
#include <iostream>
#include <memory>

int main(int argc, char *argv[])  
{  
	//生成烤肉师傅、服务员、订单对象
	std::shared_ptr<Barbecuer> p_cook(new Barbecuer());
	std::shared_ptr<Command> p_mutton(new BakeMuttonCommand(p_cook));
	std::shared_ptr<Command> p_chickenwing(new BakeChickenWingCommand(p_cook));
	std::shared_ptr<Waiter> p_waiter(new Waiter());

	//将订单对象推送到命令队列
	p_waiter->setOrder(p_mutton);
	p_waiter->setOrder(p_chickenwing);

	//服务员通知烤肉师傅具体订单
	p_waiter->notify();
	return 0;  
}
