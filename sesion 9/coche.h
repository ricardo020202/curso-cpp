#ifndef COCHE
#define COCHE

#include <string>
#include <iostream>
using namespace std;

class coche
{
private:
    string color;
    int numPuertas;
    float alto;
    float ancho;
    float largo;
    string marca;

public:
    // Constructor default
    coche();
    // Constructor con parametros
    coche(string, int, float, float, float, string);
    // Destructor
    ~coche();

    // Getters
    string getColor();
    int getNumPuertas();
    float getAlto();
    float getAncho();
    float getlargo();
    string getMarca();

    // Setters
    void setColor(string);
    void setNumPuertas(int);
    void setAlto(float);
    void setAncho(float);
    void setlargo(float);
    void setMarca(string);

    // Metodos generales
    void avanzar();
    void frenar();
    void izquierda();
    void derecha();
    void imprimirInfo();
};

#endif