#ifndef CIRCLE
#define CIRCLE

class Circle{
    private:
        float r;

    public:
        // Constructor default
        Circle();
        // Constructor cn parametros
        Circle(float);
        // Destructor sin parametros
        ~Circle();

        // Getters y Setters
        float getR();
        void setR(float);

        // Metodos generales
        float area();
        float perimetro();
};
#endif

#include <iostream>
#include <math.h>

using namespace std;

Circle::Circle(){
    //r = 10; Valor default
}

Circle::Circle(float _r){
    r = _r;
}

Circle::~Circle(){}

float Circle::getR(){
    return r;
}

void Circle::setR(float _r){
    r = _r;
}

float Circle::area(){
    return 3.14 * pow(r,2); // pow(r,2) == r * r
}

float Circle::perimetro(){
    return 2 * 3.14 * r;
}