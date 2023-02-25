#ifndef GATO
#define GATO

#include "Animal.h"

class Gato: public Animal
{
public:
    Gato();
    Gato(int, int, bool, bool);
    ~Gato();

    string maullar();
    string comer() override;
    string dormir() override;
};

#endif