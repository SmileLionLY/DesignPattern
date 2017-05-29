#include <iostream>
#include <Proxy.h>
#include <memory>

RealSubject::RealSubject()
{
	std::cout << "constructing a realsubject" << std::endl;
}

RealSubject::~RealSubject()
{
	std::cout << "distory the realsubject" << std::endl;
}

void RealSubject::request()
{
	std::cout << "request by realsubject" << std::endl;
}

Proxy::Proxy():pRealSubject(new RealSubject)
{
	std::cout << "constructing a proxy" << std::endl;
}

Proxy::~Proxy()
{
	std::cout << "distory the proxy" << std::endl;
}

void Proxy::request()
{
	//需要使用realsubject的时候去初始化一下
/*	if(NULL == pRealsubject)
	{
		cout<<"request by proxy"<<endl;
		pRealsubject = new realsubject();
	}
*/
	pRealSubject->request();

}

