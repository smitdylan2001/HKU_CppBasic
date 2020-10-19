#include "caravan.h"

Caravan::Caravan(std::string color) {
	this->color = color;
}

Caravan::Caravan(const Caravan& otherCaravan)
{
	if (this == &otherCaravan) return;
	this->color = otherCaravan.color;
	suitcase = new Suitcase(*otherCaravan.suitcase);
}

Caravan& Caravan::operator=(const Caravan& otherCaravan)
{
	std::cout << "0";
	if (this == &otherCaravan) return *this;
	std::cout << "1";
	delete suitcase;
	this->color = otherCaravan.color;
	suitcase = new Suitcase(*otherCaravan.suitcase);
	return *this;
}

Caravan::~Caravan() {
	delete suitcase;
}

std::string Caravan::getColor() {
	return color;
}

void Caravan::addSuitcase(Suitcase& suitcase){
	this->suitcase = &suitcase;
}

void Caravan::showContent() {
		std::cout << "caravan color: " << this->getColor() << std::endl 
			<< "suitcase color: " << suitcase->getColor() << std::endl 
			<< "sock color: " << suitcase->getSockColor() << std::endl;
}