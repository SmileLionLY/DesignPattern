#include <Template.h>
#include <iostream>

void CaffeineBeverage::prepareRecipe(){
	boilWater();  //把水煮沸
	brew();    //冲泡
	pourInCup();  //把咖啡因饮料倒进杯子
	addCondiments(); //加调料
}

void CaffeineBeverage::boilWater(){
	std::cout << "把水煮沸" << std::endl;
}

void CaffeineBeverage::pourInCup(){
	std::cout << "把咖啡倒进杯子" << std::endl;
}

void  Coffee::brew(){
	std::cout << "用沸水冲泡咖啡" << std::endl;
}

void Coffee::addCondiments(){
	std::cout << "加糖和牛奶" << std::endl;
}

void Tea::brew(){
	std::cout << "用沸水浸泡茶叶" << std::endl;
}

void Tea::addCondiments(){
	std::cout << "加柠檬" << std::endl;
}


