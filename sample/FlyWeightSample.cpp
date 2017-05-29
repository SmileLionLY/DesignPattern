#include <iostream>
#include <memory>
#include <FlyWeight.h>
#include <string>

int main(){

	int ascent = 70;
	int descent = 0;
	int height = 100;
	int width = 120;
	int pointSize = 10;
	std::string test = "AABCDDEFGHI";
	std::string::iterator it = test.begin();
	
	std::shared_ptr<CharacterFactory> pcF(new CharacterFactory());
	
	for(;it!=test.end();it++)
	{
		pointSize++;
		char c = *it;
		//	申请一个character对象
		std::shared_ptr<Character> charc(pcF->getCharacter(c));
		//应用外部状态
		charc->display(width,height,ascent,descent,pointSize);
	}
	std::vector<Character*>::size_type sizeChar = pcF->getCount();
	std::cout << "count:" << sizeChar << std::endl;

	return 0;

}
