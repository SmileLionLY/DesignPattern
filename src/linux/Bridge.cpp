#include <iostream>
#include <Bridge.h>

void SpeedWay::Run(){
	std::cout << "run in SpeedWay" << std::endl;
}

void StreetWay::Run(){
	std::cout << "run in StreetWay" << std::endl;
}

void Car::Run(){
	std::cout << "Car ";
	road->Run();
}

void Bus::Run(){
	std::cout << "Bus ";
	road->Run();
}


