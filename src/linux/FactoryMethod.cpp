#include <iostream>
#include <FactoryMethod.h>

ProductA::ProductA():productName("panting"){
	std::cout << "product:A" << std::endl;
}

ProductA::ProductA(std::string productname):productName(productname){
	std::cout << "product:A" << std::endl;
}

void ProductA::Show(){
	std::cout << productName << std::endl;
}

ProductB::ProductB():productName("qingyang"){
	std::cout << "Product:B" << std::endl;
}

ProductB::ProductB(std::string productname):productName(productname){
	std::cout << "Product:B" << std::endl;
}

void ProductB::Show(){
	std::cout << productName << std::endl;
}

std::shared_ptr<Product> FactoryA::createProduct(){
	
	return std::shared_ptr<Product>(new ProductA);

}

std::shared_ptr<Product> FactoryB::createProduct(){
	
	return std::shared_ptr<Product>(new ProductB());

}
