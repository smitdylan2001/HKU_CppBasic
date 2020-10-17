#include "Suitcase.h"

Suitcase::Suitcase(std::string color) {
	this->color = color;
}

std::string Suitcase::getColor() {
	return color;
}
std::string Suitcase::getSockColor() {
	return sock->getColor();
}

void Suitcase::addSocks(Socks socks) {

}