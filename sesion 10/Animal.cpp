#include "Animal.h"

Animal::Animal(){}

Animal::Animal(int _patas, int _orejas, bool _pelo, bool _cola){
    patas = _patas;
    orejas = _orejas;
    pelo = _pelo;
    cola = _cola;
}

Animal::~Animal(){}

// getters
int Animal::getPatas(){
    return patas;
}

int Animal::getOrejas(){
    return orejas;
}

bool Animal::getPelo(){
    return pelo;
}

bool Animal::getCola(){
    return cola;
}

// setters
void Animal::setPatas(int _patas){
    patas = _patas;
}

void Animal::setOrejas(int _orejas){
    orejas = _orejas;
}

void Animal::setPelo(bool _pelo){
    pelo = _pelo;
}

void Animal::setCola(bool _cola){
    cola = _cola;
}