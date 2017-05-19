#ifndef _SINGLETON_H_
#define _SINGLETON_H_

#include <iostream>
#include <memory>

class TestClass{
	public:
		void printfInfo(){
			std::cout << "my name is TestClass" << std::endl;
		}
};

class Singleton{
	public:
		TestClass* instance();
	private:
		Singleton();
		static TestClass *_instance;
};

#endif
