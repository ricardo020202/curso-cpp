#include "Perro.h"

Perro::Perro(): Animal(){}

Perro::Perro(int _patas, int _orejas, bool _pelo, bool _cola): Animal(_patas, _orejas, _pelo, _cola){}

Perro::~Perro(){}

string Perro::ladrar(){
    string s = "WOOF WOOF";
    return s;
}

string Perro::comer(){
    string s = "Comiendo croquetas";
    return s;
}

string Perro::dormir(){
    string s = "Durmiendo en mi cama";
    return s;
}