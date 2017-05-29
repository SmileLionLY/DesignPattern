#ifndef _FLYWEIGHT_H_
#define _FLYWEIGHT_H_

#include <string>
#include <memory>
#include <iostream>
#include <vector>

class Character
{
	public:
		// 析构函数
		virtual ~Character(){}
		//应用外部状态
		virtual void display(int width,int height,int ascent,int descent,int pointSize)=0;
		//获取内部状态
		virtual char getSymbol()=0;
};

//A 'ConcreteFlyweight' class
class CharacterA:public Character
{
	public:
	
		CharacterA(char c):symbol(c){}
		~CharacterA(){}
		virtual void display(int width,int height,int ascent,int descent,int pointSize);
		virtual char getSymbol();
	
	private:
		char symbol;
		int width;
		int height;
		int ascent;
		int descent;
		int pointSize;
		/*----------------------*/
};


//The 'FlyweightFactory' class
class CharacterFactory
{
	public:
		
		CharacterFactory(){}

		~CharacterFactory(){}

		// 申请一个character对象
		std::shared_ptr<Character> getCharacter(char);
		
		//获取存储的character*数量
		std::vector<Character*>::size_type getCount();
	private:
		//保存character*的容器，可以换成List等其它容器
		std::vector<std::shared_ptr<Character>> vecCharacter;
};

#endif
