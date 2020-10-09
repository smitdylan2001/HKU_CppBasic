#include "Munt.h"
class EuroMunt : public Munt
{
public:
	EuroMunt(double value, bool isKoffieMunt);
private:
	const double value = 1.00;
	const bool isKoffieMunt = false;
};

