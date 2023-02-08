#include <iostream>

using namespace std;

float suma(float a, float b){
    // float suma;
    // suma = a + b;
    // return suma;
    return a + b;
}

void imprimirArreglo(int matriz[3][3]){
    for (int i = 0; i < 3; i++){
       for (int j = 0; j < 3; j++){
            cout<<matriz[i][j]<<" ";
       }
       cout<<endl;
    }
}

int main(){
    int valor = 0;
    int matriz[3][3];
    int matriz1[3][3];
    //cout<<suma(1.2, 2.5);


    //llenar matriz de manera automatica con ciclo for
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            matriz[i][j] = i;
        }
    }

    //llenado de matriz mediante input del usuario
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"Por favor ingresa un valor: ";
            cin>>valor;
            matriz1[i][j] = valor;
        }
    }
    imprimirArreglo(matriz);
    cout<<endl;
    imprimirArreglo(matriz1);

    return 0;
}