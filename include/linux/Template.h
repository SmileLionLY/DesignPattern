#ifndef _TEMPLATE_H_
#define _TEMPLATE_H_


class CaffeineBeverage  //咖啡因饮料
{
	public:
		void prepareRecipe(); //咖啡因饮料冲泡法
		void boilWater();
		virtual void brew() = 0;
		void pourInCup();
		virtual void addCondiments() = 0;
};
class Coffee : public CaffeineBeverage
{
	public:
		void brew();
		void addCondiments();
};
class Tea : public CaffeineBeverage
{
	public:
		void brew();
		void addCondiments();
};

#endif
