#include <iostream>

using namespace std;

int main(){
    int valor = 0;
    int matriz[3][3];

    //llenar matriz de manera manual
    // matriz[0][0] = 1;
    // matriz[1][0] = 2;
    // matriz[2][0] = 3;

    //llenar matriz de manera automatica con ciclo for
    // for (int i = 0; i < 3; i++){
    //     for (int j = 0; j < 3; j++){
    //         matriz[i][j] = i;
    //     }
    // }
    // for (int i = 0; i < 3; i++){
    //    for (int j = 0; j < 3; j++){
    //         cout<<matriz[i][j]<<" ";
    //    }
    //    cout<<endl;
    // }

    //llenado de matriz mediante input del usuario
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"Por favor ingresa un valor: ";
            cin>>valor;
            matriz[i][j] = valor;
        }
    }
    for (int i = 0; i < 3; i++){
       for (int j = 0; j < 3; j++){
            cout<<matriz[i][j]<<" ";
       }
       cout<<endl;
    }

    return 0;
}