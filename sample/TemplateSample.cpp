#include <Template.h>
#include <iostream>

int main(void)
{
	std::cout << "冲杯咖啡:" << std::endl;
	Coffee c;
	c.prepareRecipe();
	std::cout << std::endl;
	std::cout << "冲杯茶:" << std::endl;
	Tea t;
	t.prepareRecipe();
	return 0;
}
