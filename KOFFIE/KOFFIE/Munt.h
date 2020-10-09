#pragma once

class Munt
{
public: 
	Munt(double value, bool isKoffieMunt);
	double GetValue();
	bool isHetKoffieMunt();
private:
	double value;
	bool isKoffieMunt;
};

