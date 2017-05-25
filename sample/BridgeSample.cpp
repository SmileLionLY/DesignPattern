#include <iostream>
#include <Bridge.h>
#include <memory>

int main(){

	std::shared_ptr<AbstractRoad> speedWay(new SpeedWay);
	std::shared_ptr<AbstractCar> car(new Car(speedWay));
	car->Run();

}
