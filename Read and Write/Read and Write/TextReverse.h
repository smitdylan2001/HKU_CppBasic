#include <iostream>
#include <string>
#include <fstream>
#include<iostream>

class TextReverse{
public:
	TextReverse(std::string readPath, std::string writePath);
	void reverseText();

private:
	std::string readPath;
	std::string writePath;
	int charactercount;
	char ch;
};

