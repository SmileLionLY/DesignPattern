#include <iostream>
#include <AbstractFactory.h>

ProductDrivedA1::ProductDrivedA1():productName("panting"){
	std::cout << "ProductDrived: A1" << std::endl;
}

ProductDrivedA1::ProductDrivedA1(std::string productname):productName(productname){
	std::cout << "ProductDrived: A1" << std::endl;
}

void ProductDrivedA1::Show(){
	std::cout << productName << std::endl;
}

ProductDrivedA2::ProductDrivedA2():productName("qingyang"){
	std::cout << "ProductDrived: A2" << std::endl;
}

ProductDrivedA2::ProductDrivedA2(std::string productname):productName(productname){
	std::cout << "ProductDrived: A2" << std::endl;
}

void ProductDrivedA2::Show(){
	std::cout << productName << std::endl;
}

ProductDrivedB1::ProductDrivedB1():productName("panting"){
	std::cout << "ProductDrived: B1" << std::endl;
}

ProductDrivedB1::ProductDrivedB1(std::string productname):productName(productname){
	std::cout << "ProductDrived: B1" << std::endl;
}

void ProductDrivedB1::display(){
	std::cout << productName << std::endl;
}

ProductDrivedB2::ProductDrivedB2():productName("qingyang"){
	std::cout << "ProductDrived: B2" << std::endl;
}

ProductDrivedB2::ProductDrivedB2(std::string productname):productName(productname){
	std::cout << "ProductDrived: B2" << std::endl;
}

void ProductDrivedB2::display(){
	std::cout << productName << std::endl;
}


std::shared_ptr<ProductBaseA> FactoryA::createProductA(){
	
	return std::shared_ptr<ProductBaseA>(new ProductDrivedA1);

}

std::shared_ptr<ProductBaseB> FactoryA::createProductB(){
	
	return std::shared_ptr<ProductBaseB>(new ProductDrivedB1());
}

std::shared_ptr<ProductBaseA> FactoryB::createProductA(){
	return std::shared_ptr<ProductBaseA>(new ProductDrivedA2);
}

std::shared_ptr<ProductBaseB> FactoryB::createProductB(){
	return std::shared_ptr<ProductBaseB>(new ProductDrivedB2);
}

