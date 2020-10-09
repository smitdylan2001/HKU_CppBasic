#include "KoffieMachine.h"
#include "EuroMunt.h"
#include "VijftigCentMunt.h"
#include "KoffieMunt.h"
#include <iostream>
#include <string>

KoffieMachine koffieMachine;
EuroMunt em(1.00, false);
VijftigCentMunt vcm(0.50, false);
KoffieMunt km(0.00, true);
std::string input;
std::string koffieString;
char input2;
void getInput();

int main()
{
	getInput();
}

void getInput() {
	std::cout << "What coin is inserted? (euro, vijftigCent, koffie)" << std::endl;
	std::cin >> input;

	if (input == "euro" || input == "Euro") {
		koffieString = koffieMachine.welkeKoffie(em.GetValue(), em.isHetKoffieMunt());
	}

	if (input == "vijftig" || input == "Vijftig" || input == "VijftigCent" || input == "vijftigCent" || input == "Vijftig cent" || input == "vijftig cent") {
		koffieString = koffieMachine.welkeKoffie(vcm.GetValue(), vcm.isHetKoffieMunt());
	}

	if (input == "koffie" || input == "Koffie" || input == "koffie munt" || input == "Koffie munt") {
		koffieString = koffieMachine.welkeKoffie(km.GetValue(), km.isHetKoffieMunt());
	}

	std::cout << "available: " << koffieString << std::endl;

	std::cout << "Want to insert another coin? (Y/N)" << std::endl;
	std::cin >> input2;

	if (input2 == 'y' || input2 == 'Y') {
		getInput();
	}
	else {
		std::cout << "here is your " << koffieString << std::endl;
		koffieMachine.welkeKoffie(-koffieMachine.getInsertedValue(), false); // reset value
		std::cout << "next please" << std::endl;
		getInput();
	}
}

