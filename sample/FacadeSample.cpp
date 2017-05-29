#include <Facade.h>
#include <memory>
int main()
{
	std::shared_ptr<Facade> pFacade(new Facade);
	pFacade->operationWrapper();
	return 0;
}
