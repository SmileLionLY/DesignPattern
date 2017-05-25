#ifndef _COMPOSITE_H_
#define _COMPOSITE_H_
#include <string>
#include <memory>
#include <list>
#include <iostream>

class Company  
{

	public:
		Company(std::string companyname) { name = companyname; }
		virtual ~Company(){}
		virtual void add(std::shared_ptr<Company> pCom) {
		 std::cout << "don't support this function" << std::endl;
		}
		virtual void show(int depth) = 0;

	protected:
		std::string name;
};

class ConcreteCompany : public Company  
{
	public:
	
		ConcreteCompany(std::string name);
		virtual ~ConcreteCompany() {}
		void add(std::shared_ptr<Company> pCom );
		void show(int depth);

	private:
		std::list<std::shared_ptr<Company>> listCompany;
};


//具体的部门，财务部
class FinanceDepartment : public Company 
{
	public:
		FinanceDepartment(std::string name):Company(name){}
		virtual ~FinanceDepartment() {}
		virtual void show(int depth); //只需显示，无限添加函数，因为已是叶结点
};

//具体的部门，人力资源部
class HRDepartment :public Company  
{
	public:
		HRDepartment(std::string name):Company(name){}
		virtual ~HRDepartment() {}
		virtual void show(int depth); //只需显示，无限添加函数，因为已是叶结点
};

#endif
