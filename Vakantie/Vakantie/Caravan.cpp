#include "caravan.h"

Caravan::Caravan(std::string color) {
	std::cout << "Caravan: ctor: '" << this->color << "' adres " << this << std::endl;
	this->color = color;
}

Caravan::Caravan(const Caravan& newCaravan)
{
	std::cout << "Caravan: cctor: '" << this->color << "' adres " << this << std::endl;
	if (this == &newCaravan) return;
	suitcase = new Suitcase(*newCaravan.suitcase);
}

Caravan::~Caravan() {
	delete suitcase;
}

std::string Caravan::getColor() {
	return color;
}

Suitcase Caravan::addSuitcase(Suitcase suitcase){


	return suitcase;
}

void Caravan::showContent() {
	std::cout << suitcase->getColor() << " and " << suitcase->getSockColor();
}