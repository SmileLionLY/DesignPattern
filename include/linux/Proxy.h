#ifndef _PROXY_H_
#define _PROXY_H_

#include <memory>

class Subject
{
	public:
		Subject(){}
		virtual ~Subject(){}
		virtual void request() = 0;
};

//定义真正的实体
class RealSubject :public Subject
{
	public:
		RealSubject();
		virtual ~RealSubject();
		virtual void request();
};

//定义代理类,含有一个指向realsubject的对象的指针
class Proxy :public Subject
{
	public:
		Proxy();
		virtual ~Proxy();
		virtual void request();
	
	private:
		std::shared_ptr<RealSubject> pRealSubject;
};

#endif
