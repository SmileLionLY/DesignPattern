#include <Proxy.h>
#include <memory>
#include <string>

int main(){
	std::shared_ptr<Subject> pProxy(new Proxy);
	pProxy->request();
}
