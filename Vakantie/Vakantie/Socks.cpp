#include "Socks.h"

Socks::Socks(std::string color) {
	this->color = color;
}

Socks::Socks(const Socks& otherSocks)
{
	if (this == &otherSocks) return;
	this->color = otherSocks.color;
}

Socks& Socks::operator=(const Socks& otherSocks)
{
	if (this == &otherSocks) return *this;
	this->color = otherSocks.color;
	return *this;
}

Socks::~Socks()
{
}

std::string Socks::getColor() {
	return color;
}

