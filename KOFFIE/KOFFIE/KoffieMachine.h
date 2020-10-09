#include <iostream>
#include <list>

class KoffieMachine{
public:
	std::string welkeKoffie(double muntWaarde, bool isKoffieMunt);
	double getInsertedValue();

private:
	std::string beschikbareKoffie;
	double totaleWaarde;
	bool kanGoedkopeKoffie;
	bool kanNormaleKoffie;
	bool kanPremiumKoffie;
};

