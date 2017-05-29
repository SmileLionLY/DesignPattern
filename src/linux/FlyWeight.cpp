#include <FlyWeight.h>
#include <iostream>
#include <string>

char CharacterA::getSymbol(){
	return symbol;
}

void CharacterA::display( int width, int height, int ascent, int descent, int pointSize ){
	// 接收并作用外部状态
	this->ascent = ascent;
	this->descent = descent;
	this->height = height;
	this->pointSize = pointSize;
	this->width = width;

	std::cout << this->symbol <<" "	<< this->ascent <<" "<< this->descent <<" "<< this->height <<" "<< this->pointSize <<" "<< this->width << std::endl;
}

std::shared_ptr<Character> CharacterFactory::getCharacter(char a){
	std::vector<std::shared_ptr<Character>>::iterator iter = vecCharacter.begin();
	for(; iter != vecCharacter.end(); iter++){
		if((*iter)->getSymbol() == a){
			return *iter;
		}
	}

	std::shared_ptr<Character> pf(new CharacterA(a));
	vecCharacter.push_back(pf);
	return pf;
}
std::vector<std::shared_ptr<Character>>::size_type CharacterFactory::getCount()
{
	    return vecCharacter.size();
}
