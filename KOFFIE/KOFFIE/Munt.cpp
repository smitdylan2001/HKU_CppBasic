#include "Munt.h"

Munt::Munt(double waarde, bool isKoffieMunt) {
	value = waarde;
	this->isKoffieMunt = isKoffieMunt;
}

double Munt::GetValue() {
	return value;
}

bool Munt::isHetKoffieMunt() {
	return isKoffieMunt;
}