#pragma once
#include <string>
#include <iostream>

class Socks
{
public:
	Socks(std::string color);
	Socks(const Socks& otherSocks);
	Socks& operator=(const Socks& otherSocks);
	virtual ~Socks();

	std::string getColor();
private:
	std::string color = "gray";
};

