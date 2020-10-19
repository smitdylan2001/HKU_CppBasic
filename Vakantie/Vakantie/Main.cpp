#include <iostream>
#include "Caravan.h"

int main()
{
    Caravan* car1 = new Caravan("Blue");
    Suitcase* suitcase1 = new Suitcase("Red");
    Socks* sock = new Socks("Green");

    suitcase1->addSocks(*sock);
    car1->addSuitcase(*suitcase1);

    car1->showContent();

    std::cout << std::endl << "F in chat for the caravan, let's get another " << std::endl;

    Caravan* car2;
    car2 = new Caravan(*car1);

    delete car1;

    car2->showContent();

    delete car2;

    return 0;
}

