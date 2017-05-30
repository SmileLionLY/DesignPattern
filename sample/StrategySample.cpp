#include <memory>
#include <string>
#include <Strategy.h>

int main(int argc,char* argv[])
{
	std::shared_ptr<Strategy> ps(new ConcreteStrategyA);
	std::shared_ptr<Context> pc(new Context(ps));
	pc->doAction();
	return 0;
}
