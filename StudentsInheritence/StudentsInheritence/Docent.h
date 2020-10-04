#include "Persoon.h"

class Docent : public Persoon {
public:
	Docent(int age, std::string name, int salary);
	int salary;
};

