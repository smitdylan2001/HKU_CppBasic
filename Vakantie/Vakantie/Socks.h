#pragma once
#include <string>
#include <iostream>

class Socks
{
public:
	Socks(std::string color);
	Socks(const Socks& newSocks);
	Socks& operator=(const Socks& newSocks);
	virtual ~Socks();

	std::string getColor();
private:
	std::string color = "gray";
};

