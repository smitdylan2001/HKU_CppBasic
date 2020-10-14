#include <string>

class Socks
{
public:
	Socks(std::string color);
	std::string getColor();
private:
	std::string color = "gray";
};

