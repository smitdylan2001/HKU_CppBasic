#include "KoffieMachine.h"

std::string KoffieMachine::welkeKoffie(double muntWaarde, bool isKoffieMunt)
{
    totaleWaarde += muntWaarde;
    
    if (isKoffieMunt || totaleWaarde >= 0.50) {
        kanGoedkopeKoffie = true;
        beschikbareKoffie = "goedkope koffie";
    }

    if (isKoffieMunt || totaleWaarde >= 1) {
        kanNormaleKoffie = true;
        beschikbareKoffie = "normale koffie";
    }

    if (isKoffieMunt || totaleWaarde >= 1.50) {
        kanPremiumKoffie = true;
        beschikbareKoffie = "dure koffie";
    }

    return beschikbareKoffie;
}

double KoffieMachine::getInsertedValue() {
    return totaleWaarde;
}
