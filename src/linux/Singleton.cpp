#include <Singleton.h>
#include <memory>

TestClass* Singleton::_instance = nullptr;

TestClass* Singleton::instance(){
	
	if(_instance == nullptr){
		_instance = new TestClass();
	}
	
	return _instance;
}
