#ifndef ANIMAL
#define ANIMAL

#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
    int patas;
    int orejas;
    bool pelo;
    bool cola;
    
public:
    Animal();
    Animal(int, int, bool, bool);
    ~Animal();

    // Getters
    int getPatas();
    int getOrejas();
    bool getPelo();
    bool getCola();

    // Setters
    void setPatas(int);
    void setOrejas(int);
    void setPelo(bool);
    void setCola(bool);

    // Metodos generales
    virtual string comer() = 0;
    virtual string dormir() = 0;
};

#endif