#include <iostream>
#include <string>

class TextReverse
{
public:
	TextReverse(std::string readPath, std::string writePath);
	void readFile();
	void writeFile();

private:
	std::string readPath;
	std::string writePath;
	int charactercount;
};

