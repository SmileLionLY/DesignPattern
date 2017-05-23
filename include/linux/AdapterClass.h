#ifndef _ADAPTER_H_
#define _ADAPTER_H_
  
class TargetClass  
{  
	public:  
		// Methods  
		virtual void Request(){};  
};  

// "Adaptee"  
class AdapteeClass  
{  
	public:  
		// Methods  
		void SpecificRequest();
};  

// "Adapter"  
class AdapterClass : public AdapteeClass, public TargetClass  
{  
	public:  
		// Implements ITarget interface  
		void Request();  
};  

#endif
