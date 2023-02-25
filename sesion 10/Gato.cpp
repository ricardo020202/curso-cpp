#include "Gato.h"

Gato::Gato(): Animal(){}

Gato::Gato(int _patas, int _orejas, bool _pelo, bool _cola): Animal(_patas, _orejas, _pelo, _cola){}

Gato::~Gato(){}

string Gato::maullar(){
    string s = "MIAU MIAU";
    return s;
}

string Gato::comer(){
    string s = "Comiendo atun";
    return s;
}

string Gato::dormir(){
    string s = "Durmiendo en una caja";
    return s;
}