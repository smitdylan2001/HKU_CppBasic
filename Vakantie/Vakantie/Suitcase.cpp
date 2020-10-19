#include "Suitcase.h"

Suitcase::Suitcase(std::string color) {
	this->color = color;
}

Suitcase::Suitcase(const Suitcase& otherSuitcase)
{
	if (this == &otherSuitcase) return;
	this->color = otherSuitcase.color;
	sock = new Socks(*otherSuitcase.sock);
}

Suitcase& Suitcase::operator=(const Suitcase& otherSuitcase)
{
	if (this == &otherSuitcase) return *this;
	delete sock;
	this->color = otherSuitcase.color;
	sock = new Socks(*otherSuitcase.sock);
	return *this;
}

Suitcase::~Suitcase()
{
	delete sock;
}

std::string Suitcase::getColor() {
	return color;
}
std::string Suitcase::getSockColor() {
	std::string color = sock->getColor();
	return color;
}

void Suitcase::addSocks(Socks& socks) {
	this->sock = &socks;
}