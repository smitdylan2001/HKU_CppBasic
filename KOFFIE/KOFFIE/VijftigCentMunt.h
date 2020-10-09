#include "Munt.h"

class VijftigCentMunt : public Munt{
public:
	VijftigCentMunt(double value, bool isKoffieMunt);
private:
	const double value = 0.50;
	const bool isKoffieMunt = false;
};

