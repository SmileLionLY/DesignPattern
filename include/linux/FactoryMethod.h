#include <iostream>
#include <memory>

class Product{
	public:
		virtual void Show() = 0;

};

class ProductA:public Product {
	public:
		ProductA();
		ProductA(std::string productname);
		virtual void Show();
		~ProductA();
	private:
		std::string productName;
};

class ProductB:public Product{
	public:
		ProductB();
		ProductB(std::string productname);
		virtual void Show();
		~ProductB();
	private:
		std::string productName;
};

class Factory{
	public:
		virtual std::shared_ptr<Product> createProduct() = 0;

};

class FactoryA:public Factory{

	public:
		virtual std::shared_ptr<Product> createProduct();

};

class FactoryB:public FactoryA{
	public:
		virtual std::shared_ptr<Product> createProduct();

};

