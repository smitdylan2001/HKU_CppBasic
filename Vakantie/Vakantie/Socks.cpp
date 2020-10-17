#include "Socks.h"

Socks::Socks(std::string color) {
	this->color = color;
}

Socks::Socks(const Socks& newSocks)
{
	if (this == &newSocks) return;
	this->color = newSocks.color;
}

Socks& Socks::operator=(const Socks& newSocks)
{
	if (this == &newSocks) return *this;
	this->color = newSocks.color;
	return *this;
}

Socks::~Socks()
{
}

std::string Socks::getColor() {
	return color;
}

