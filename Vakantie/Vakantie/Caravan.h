#include <string>
#include "Suitcase.h"

class Caravan
{
public:
	Caravan(std::string color);
	std::string getColor();
	Suitcase addSuitcase(Suitcase suitcase);
private:
	std::string color = "gray";
};

