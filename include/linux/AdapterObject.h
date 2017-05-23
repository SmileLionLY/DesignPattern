#ifndef _ADAPTEROBJECT_H_
#define _ADAPTEROBJECT_H_

#include<iostream>  
#include<memory>

class TargetObject  
{  
	public:  
		// Methods  
		virtual void Request(){};  
};  

// "Adaptee"  
class AdapteeObject  
{  
	public:  
		// Methods  
		void SpecificRequest();  
};  

// "Adapter"  
class AdapterObject : public TargetObject  
{  
	private:  
		std::shared_ptr<AdapteeObject> adapteeObject;  
	public:  
		AdapterObject();  
		// Implements ITarget interface  
		void Request();
};  

#endif
