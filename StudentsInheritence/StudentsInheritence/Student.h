#include "Persoon.h"

class Student : public Persoon
{
public:
	Student(int age, std::string name, int points);
	int points;
};

