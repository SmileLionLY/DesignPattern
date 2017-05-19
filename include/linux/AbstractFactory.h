#include <iostream>
#include <memory>

class ProductBaseA{
	public:
		virtual void Show() = 0;

};

class ProductBaseB{
	public:
		virtual void display() = 0;

};

class ProductDrivedA1:public ProductBaseA {
	public:
		ProductDrivedA1();
		ProductDrivedA1(std::string productname);
		virtual void Show();
		~ProductDrivedA1();
	private:
		std::string productName;
};

class ProductDrivedA2:public ProductBaseA{
	public:
		ProductDrivedA2();
		ProductDrivedA2(std::string productname);
		virtual void Show();
		~ProductDrivedA2();
	private:
		std::string productName;
};

class ProductDrivedB1:public ProductBaseB {
	public:
		ProductDrivedB1();
		ProductDrivedB1(std::string productname);
		virtual void display();
		~ProductDrivedB1();
	private:
		std::string productName;
};

class ProductDrivedB2:public ProductBaseB {
	public:
		ProductDrivedB2();
		ProductDrivedB2(std::string productname);
		virtual void display();
		~ProductDrivedB2();
	private:
		std::string productName;
};

class Factory{
	public:
		virtual std::shared_ptr<ProductBaseA> createProductA() = 0;
		virtual std::shared_ptr<ProductBaseB> createProductB() = 0;

};

class FactoryA:public Factory{

	public:
		virtual std::shared_ptr<ProductBaseA> createProductA();
		virtual std::shared_ptr<ProductBaseB> createProductB();

};

class FactoryB:public Factory{
	public:
		virtual std::shared_ptr<ProductBaseA> createProductA();
		virtual std::shared_ptr<ProductBaseB> createProductB();
};

