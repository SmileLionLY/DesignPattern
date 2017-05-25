#include <Composite.h>
#include <memory>
#include <iostream>

int main(){

	std::shared_ptr<Company> root(new ConcreteCompany("总公司"));
	std::shared_ptr<Company> leaf1(new FinanceDepartment("财务部"));
	std::shared_ptr<Company> leaf2(new HRDepartment("人力资源部"));
	root->add(leaf1);

	//分公司
	std::shared_ptr<Company> mid1(new ConcreteCompany("分公司A"));
	std::shared_ptr<Company> leaf3(new FinanceDepartment("财务部"));
	std::shared_ptr<Company> leaf4(new HRDepartment("人力资源部"));
	mid1->add(leaf3);
	mid1->add(leaf4);
	root->add(mid1);

	//分公司B
	std::shared_ptr<Company> mid2(new ConcreteCompany("分公司B"));
	std::shared_ptr<FinanceDepartment> leaf5(new FinanceDepartment("财务部"));
	std::shared_ptr<HRDepartment> leaf6(new HRDepartment("人力资源部"));
	mid2->add(leaf5);
	mid2->add(leaf6);
	root->add(mid2);
	root->show(0);

	return 0;
}
