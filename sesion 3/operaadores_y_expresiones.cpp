// Autor: José Ricardo Rosales Castañeda
// Fecha: 31/01/2023
// Descripcion: Ejemplos de operadres y expresiones

#include <iostream>
#include <string>

using namespace std;

int main() {
    int x = 3, y = 4, z = 0, z1 = 3;
    float x1 = 3.4;
    double x2 = 0;
    char char1 = 'a', char2 = 'b';
    string s1 = "Hola mundo";
    const int C1 = 3;
    bool bo, bo1, bo2;

    // operadores logicos
    z = x - y;
    cout<<"Resultado resta = "<<z<<endl;
    z = x + y;
    cout<<"Resultado suma = "<<z<<endl;
    z = x * y;
    cout<<"Resultado multi = "<<z<<endl;
    z = y / x;
    cout<<"Resultado division = "<<z<<endl;
    z = x % y;
    cout<<"Resultado modulo = "<<z<<endl;
    z++;
    cout<<"Resultado ++ = "<<z<<endl;\
    z--;
    cout<<"Resultado -- = "<<z<<endl;
    z += x;
    cout<<"Resultado += = "<<z<<endl;
    z -= x;
    cout<<"Resultado -= = "<<z<<endl;
    z *= x;
    cout<<"Resultado *= = "<<z<<endl;
    z /= x;
    cout<<"Resultado /= = "<<z<<endl;
    
    //z1 = x - y;
    // cout<<"Resultado directo = "<<z<<endl;
    // cout<<"Resultado mediante variable = "<<z1<<endl;\

    // operadores de comparacion
    bo = char1 == char2;
    cout<<"Resultado == "<<bo<<endl;
    bo1 = char1 != char2;
    cout<<"Resultado != "<<bo1<<endl;

    // operadores logicos
    bo2 = bo and bo1;
    cout<<"Resultado and "<<bo2<<endl;
    bo2 = bo or bo1;
    cout<<"Resultado or "<<bo2<<endl;
    cout<<"Resultado not "<<!bo2<<endl;

    return 0;
}