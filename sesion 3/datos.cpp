// Autor: José Ricardo Rosales Castañeda
// Fecha: 31/01/2023
// Descripcion: Ejemplos de tipos de datos

#include <iostream>
#include <string>

using namespace std;

int main() {
    cout<<"directo"<<endl;
    cout<<"a"<<endl;
    cout<<"Hola mundo"<<endl;
    cout<<3<<endl;
    cout<<3.4<<endl;

    int x = 3, y = 0, z = 0;
    float x1 = 3.4;
    double x2 = 0;
    char char1 = 'a', char2 = 'b';
    string s1 = "Hola mundo";

    cout<<endl<<"mediante variable"<<endl;
    cout<<char1<<endl;
    cout<<s1<<endl;
    cout<<x<<endl;
    cout<<x1<<endl;

    const int c1 = 3;

    return 0;
}