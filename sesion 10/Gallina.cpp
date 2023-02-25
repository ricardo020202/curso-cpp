#include "Gallina.h"

Gallina::Gallina(): Animal(){}

Gallina::Gallina(int _patas, int _orejas, bool _pelo, bool _cola): Animal(_patas, _orejas, _pelo, _cola){}

Gallina::~Gallina(){}

string Gallina::cacarear(){
    string s = "CLO CLO";
    return s;
}

string Gallina::comer(){
    string s = "Comiendo semillas";
    return s;
}

string Gallina::dormir(){
    string s = "Durmiendo en un gallinero";
    return s;
}