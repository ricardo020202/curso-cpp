#ifndef PERRO
#define PERRO

#include "Animal.h"

class Perro: public Animal
{
public:
    Perro();
    Perro(int, int, bool, bool);
    ~Perro();

    string ladrar();
    string comer() override;
    string dormir() override;
};

#endif