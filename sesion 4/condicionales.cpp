#include <iostream>

using namespace std;

int main(){
    int edad = 0;

    cout<<"Bienvenido, por favor ingrese su edad: "; 
    cin>>edad;

    //Ejemplo de condicional sencillo
    // if(edad >= 18){
    //     cout<<"Eres mayor de edad"<<endl;
    // } else{
    //     cout<<"No eres mayor de edad"<<endl;
    // }

    //Ejemplo de condicional con elseif
    // if(edad > 18){
    //     cout<<"Eres mayor de edad"<<endl;
    // } else if(edad == 18){
    //     cout<<"Tienes 18 años"<<endl;
    // } else if(edad == 17){
    //     cout<<"Tienes 17 años"<<endl;
    // }else{
    //     cout<<"No eres mayor de edad"<<endl;
    // }

    //Ejemplo condicionales anidados
    if(edad >= 18 and edad <= 21){
        if(edad == 20){
           cout<<"tienes 20"<<endl; 
        } else{
            cout<<"No tienes 20"<<endl;
        }
    } else if(edad < 18){
        cout<<"No eres mayor de edad"<<endl;
    } else if (edad > 21){
        cout<<"tienes mas de 21"<<endl;
    } else{
        cout<<"Ingresa una edad valida"<<endl;
    }

    return 0;
}