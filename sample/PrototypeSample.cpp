#include "Prototype.h"
#include <memory>

int main(){
 
    std::shared_ptr<Prototype> p(new ConcreatePrototype1());
 //   std::shared_ptr<Prototype> p1(p->Clone());

    return 0;

}
