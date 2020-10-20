#include <iostream>
#include <string>
#include <fstream>
#include<iostream>

class CombineFiles{
public:
	CombineFiles(std::string readPath1, std::string readPath2, std::string writePath);
	void combineText();

private:
	std::string readPath1;
	std::string readPath2;
	std::string writePath;
	std::string line;
};

