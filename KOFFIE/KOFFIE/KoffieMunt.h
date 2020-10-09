#include "Munt.h"

class KoffieMunt : public Munt
{
public:
	KoffieMunt(double value, bool isKoffieMunt);

private:
	const double value = 0.00;
	const bool isKoffieMunt = true;
};

