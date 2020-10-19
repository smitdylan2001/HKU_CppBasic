#include <string>
#include <iostream>
#include "Suitcase.h"

class Caravan
{
public:
	Caravan(std::string color);
	Caravan(const Caravan& otherCaravan);
	Caravan& operator=(const Caravan& otherCaravan);
	virtual ~Caravan();

	std::string getColor();
	void addSuitcase(Suitcase& suitcase);
	void showContent();

private:
	std::string color = "gray";
	Suitcase* suitcase = nullptr;
};

