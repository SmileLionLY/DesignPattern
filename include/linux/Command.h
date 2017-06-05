#include <iostream>  
#include <string>
#include <memory>
#include <vector>

/* 烤肉师傅类，只负责烤串工作reciver类 */
class Barbecuer
{
	public:

		void bakeMutton(){
			std::cout << "Bake mutton" << std::endl;
		}

		void bakeChickenWing(){
			std::cout << "Bake ChickenWing"<< std::endl;
		}

};

/*抽象命令类：是执行具体操作的接口*/
class Command
{
	public:
		Command(){}
		Command(std::shared_ptr<Barbecuer> receiver):pReceiver(receiver){}
		virtual void executeCommand() = 0; //执行命令
	protected:
		std::shared_ptr<Barbecuer> pReceiver;
};

/*具体命令类:烤羊肉串命令*/
class BakeMuttonCommand:public Command
{
	public:
		BakeMuttonCommand(std::shared_ptr<Barbecuer> receiver):Command(receiver){}

		void executeCommand();
};

/*具体命令类:烤鸡翅串命令*/
class BakeChickenWingCommand:public Command
{
	public:
		BakeChickenWingCommand(std::shared_ptr<Barbecuer> receiver):Command(receiver){}
		void executeCommand();
};

/*服务员类 invoker类*/
class Waiter
{
	public:
		void setOrder(std::shared_ptr<Command> );
		void notify();
	private:
		std::vector<std::shared_ptr<Command>> commandList; //这里相当于一个命令对象队列
};

