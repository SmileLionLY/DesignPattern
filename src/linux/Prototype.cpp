#include "Prototype.h"  
#include <iostream>  
#include <memory>

ConcreatePrototype1::ConcreatePrototype1()  
{  
	std::cout << "construction of ConcreatePrototype1\n";  
}  


ConcreatePrototype1::~ConcreatePrototype1()  
{  
	std::cout << "destruction of ConcreatePrototype1\n";  
}  

ConcreatePrototype1::ConcreatePrototype1(const ConcreatePrototype1&)  
{  
	std::cout << "copy construction of ConcreatePrototype1\n";  
}  

std::shared_ptr<Prototype> ConcreatePrototype1::Clone()  
{  
	return std::shared_ptr<Prototype>(new ConcreatePrototype1(*this));  
}  



ConcreatePrototype2::ConcreatePrototype2()  
{  
	std::cout << "construction of ConcreatePrototype2\n";  
}  


ConcreatePrototype2::~ConcreatePrototype2()  
{  
	std::cout << "destruction of ConcreatePrototype2\n";  
}  

ConcreatePrototype2::ConcreatePrototype2(const ConcreatePrototype2&)  
{  
	std::cout << "copy construction of ConcreatePrototype2\n";  
}  

std::shared_ptr<Prototype> ConcreatePrototype2::Clone()  
{  
	return std::shared_ptr<Prototype>(new ConcreatePrototype2(*this));  
}  
