#ifndef PROTOTYPE_H  
#define PROTOTYPE_H  

#include <memory>

class Prototype  
{  
	public:  
		Prototype(){}  
		virtual ~Prototype(){}  

		virtual std::shared_ptr<Prototype> Clone() = 0;  
};  



// 派生自Prototype，实现Clone方法  
class ConcreatePrototype1:public Prototype  
{  
	public:  
		ConcreatePrototype1();  
		ConcreatePrototype1(const ConcreatePrototype1&);  
		~ConcreatePrototype1();  
		
        virtual std::shared_ptr<Prototype> Clone();  
};  

// 派生自Prototype,实现Clone方法  
class ConcreatePrototype2:public Prototype  
{  
	public:  
		ConcreatePrototype2();  
		ConcreatePrototype2(const ConcreatePrototype2&);  
		 ~ConcreatePrototype2();  

        virtual std::shared_ptr<Prototype> Clone();  
};  

#endif  
