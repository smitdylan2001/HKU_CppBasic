#include <string>
#include <iostream>
#include "Suitcase.h"

class Caravan
{
public:
	Caravan(std::string color);
	Caravan(const Caravan& newCaravan);
	Caravan& operator=(const Caravan& newrCaravan);
	virtual ~Caravan();

	std::string getColor();
	Suitcase addSuitcase(Suitcase suitcase);
	void showContent();

private:
	std::string color = "gray";
	Suitcase* suitcase = nullptr;
};

