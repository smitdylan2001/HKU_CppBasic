#include "KoffieMachine.h"

bool isFilled = false;
bool kanGoedkopeKoffie;
bool kanNormaleKoffie;
bool kanPremiumKoffie;
int totaleWaarde;
std::list<std::string> beschikbareKoffie;

std::list<std::string> KoffieMachine::welkeKoffie(int muntWaarde, bool isKoffieMunt)
{
    totaleWaarde += muntWaarde;
    
    if (isKoffieMunt || totaleWaarde > 0.50) {
        kanGoedkopeKoffie = true;
        if (!isFilled) {
            beschikbareKoffie.assign(1, "goedkope koffie");
            isFilled = true;
        }
    }

    if (isKoffieMunt || totaleWaarde > 1) {
        isFilled = false;
        kanNormaleKoffie = true;
        if (!isFilled) {
            beschikbareKoffie.assign(1, "normale koffie");
            isFilled = true;
        }
    }

    if (isKoffieMunt || totaleWaarde > 1.50) {
        kanPremiumKoffie = true;
        if (!isFilled) {
            beschikbareKoffie.assign(1, "dure koffie");
            isFilled = true;
        }
    }

    return beschikbareKoffie;
}
