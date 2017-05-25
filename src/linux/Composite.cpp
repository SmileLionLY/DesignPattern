#include <string>
#include <list>
#include <iostream>
#include <Composite.h>

ConcreteCompany::ConcreteCompany(std::string name):Company(name){

}

void ConcreteCompany::add(std::shared_ptr<Company> pcom){
	listCompany.push_back(pcom);
}

void ConcreteCompany::show(int depth){
	for(int i = 0;i < depth; i++)
		std::cout << "-";
	std::cout << name << std::endl;
	
	std::list<std::shared_ptr<Company>>::iterator iter=listCompany.begin();
	for(; iter != listCompany.end(); iter++) //显示下层结点
		(*iter)->show(depth + 2);
}

void FinanceDepartment::show(int depth){
	for(int i = 0; i < depth; i++)
		std::cout << "-";
	std::cout << name << std::endl;
}

void HRDepartment::show(int depth){
	for(int i = 0; i < depth; i++)
		std::cout << "-";
	std::cout << name << std::endl;
}

