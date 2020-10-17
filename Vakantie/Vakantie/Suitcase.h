#pragma once
#include <string>
#include "Socks.h"

class Suitcase
{
public:
	Suitcase(std::string color);
	std::string getColor();
	std::string getSockColor();
	void addSocks(Socks socks);
private:
	std::string color = "gray";
	Socks* sock = nullptr;
};

