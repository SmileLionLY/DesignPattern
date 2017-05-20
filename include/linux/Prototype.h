#ifndef PROTOTYPE_H  
#define PROTOTYPE_H  

class Prototype  
{  
	public:  
		Prototype(){}  
		virtual ~Prototype(){}  

		virtual Prototype *Clone() = 0;  
};  



// 派生自Prototype，实现Clone方法  
class ConcreatePrototype1:public Prototype  
{  
	public:  
		ConcreatePrototype1();  
		ConcreatePrototype1(const ConcreatePrototype1&);  
		~ConcreatePrototype1();  

		virtual Prototype* Clone();  
};  

// 派生自Prototype,实现Clone方法  
class ConcreatePrototype2:public Prototype  
{  
	public:  
		ConcreatePrototype2();  
		ConcreatePrototype2(const ConcreatePrototype2&);  
		 ~ConcreatePrototype2();  

		virtual Prototype* Clone();  
};  

#endif  
