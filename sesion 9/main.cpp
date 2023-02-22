#include "coche.cpp"

int main(){
    int numPuertas;
    string marca, color;
    float alto, largo, ancho;

    // Constructor default
    coche c1;
    c1.imprimirInfo();

    cout<<"Color: ";cin>>color;
    cout<<"Numero de puertas: ";cin>>numPuertas;
    cout<<"Alto: ";cin>>alto;
    cout<<"Ancho: ";cin>>ancho;
    cout<<"Largo: ";cin>>largo;
    cout<<"Marca: ";cin>>marca;

    // Constructor con parametros
    coche c2(color, numPuertas, alto, ancho, largo, marca);
    c2.imprimirInfo();

    // Probando metodos generales
    c1.setMarca("Ford");
    c1.imprimirInfo();

    c1.avanzar();
    c1.frenar();
    c1.izquierda();
    c1.derecha();


    return 0;
}