#include "coche.h"

// Constructor default
coche::coche(){
    color = "rojo";
    numPuertas = 4;
    alto = 1.54;
    ancho = 1.74;
    largo = 4.57;
    marca = "Mazda";
}

// Constructor con parametros
coche::coche(string _color, int _numPuertas, float _alto, float _ancho, float _largo, string _marca){
    color = _color;
    numPuertas = _numPuertas;
    alto = _alto;
    ancho = _ancho;
    largo = _largo;
    marca = _marca;
}

// Destructor
coche::~coche(){}

// Getters
string coche::getColor(){
    return color;
}

int coche::getNumPuertas(){
    return numPuertas;
}

float coche::getAlto(){
    return alto;
}

float coche::getAncho(){
    return ancho;
}

float coche::getlargo(){
    return largo;
}

string coche::getMarca(){
    return marca;
}

// Setters
void coche::setColor(string _color){
    color = _color;
}

void coche::setNumPuertas(int _numPuertas){
    numPuertas = _numPuertas;
}

void coche::setAlto(float _alto){
    alto = _alto;
}

void coche::setAncho(float _ancho){
    ancho = _ancho;
}

void coche::setlargo(float _largo){
    largo = _largo;
}

void coche::setMarca(string _marca){
    marca = _marca;
}

// Metodos generales
void coche::avanzar(){
    cout<<"El coche esta avanzando"<<endl;
}

void coche::frenar(){
    cout<<"El coche esta frenando"<<endl;
}

void coche::izquierda(){
    cout<<"El coche esta girando a la izquierda"<<endl;
}

void coche::derecha(){
    cout<<"El coche esta girando a la derecha"<<endl;
}

void coche::imprimirInfo(){
    cout<<"========================================="<<endl;
    cout<<"Ficha tecnica:"<<endl;
    cout<<"Color: "<<getColor()<<endl;
    cout<<"Numero de puertas: "<<getNumPuertas()<<endl;
    cout<<"Alto: "<<getAlto()<<"m"<<endl;
    cout<<"Ancho: "<<getAncho()<<"m"<<endl;
    cout<<"Largo: "<<getlargo()<<"m"<<endl;
    cout<<"Marca: "<<getMarca()<<endl;
    cout<<"========================================="<<endl;
}