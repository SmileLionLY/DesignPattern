#include <memory>

#include <string>
#include <Command.h>

void BakeMuttonCommand::executeCommand(){
	pReceiver->bakeMutton();
}



void BakeChickenWingCommand::executeCommand(){
	pReceiver->bakeChickenWing();
}



void Waiter::setOrder(std::shared_ptr<Command> command){
	commandList.push_back(command);
	std::cout << "增加烤肉命令" << std::endl;
}


void Waiter::notify(){
	std::vector<std::shared_ptr<Command>>::iterator i;
	for(i = commandList.begin(); i != commandList.end(); ++ i)
		(*i)->executeCommand();
}


