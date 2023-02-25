#ifndef GALLINA
#define GALLINA

#include "Animal.h"

class Gallina: public Animal
{
public:
    Gallina();
    Gallina(int, int, bool, bool);
    ~Gallina();

    string cacarear();
    string comer() override;
    string dormir() override;
};

#endif