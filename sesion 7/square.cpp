#ifndef SQUARE
#define SQUARE

class Square{
    private:
        float a;

    public:
        // Constructor default
        Square();
        // Constructor cn parametros
        Square(float);
        // Destructor sin parametros
        ~Square();

        // Getters y Setters
        float getA();
        void setA(float);

        // Metodos generales
        float area();
        float perimetro();
};
#endif

#include <iostream>

using namespace std;

Square::Square(){
    //a = 10; Valor default
}

Square::Square(float _a){
    a = _a;
}

Square::~Square(){}

float Square::getA(){
    return a;
}

void Square::setA(float _a){
    a = _a;
}

float Square::area(){
    return a*a;
}

float Square::perimetro(){
    return a*4;
}