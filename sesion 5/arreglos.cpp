#include <iostream>

using namespace std;

int main(){
    int valor = 0;
    int arr[10];

    //llenar arreglo de manera manual
    // arr[0] = 1;
    // arr[1] = 2;

    //llenar arreglo de manera automatica con ciclo for
    // for (int i = 0; i < 10; i++){
    //     arr[i] = (i + 1) * 10;
    // }
    // for (int i = 0; i < 10; i++){
    //     cout<<arr[i]<<" ";
    // }

    //llenado de arreglo mediante input del usuario
    for (int i = 0; i < 10; i++){
        cout<<"Por favor ingresa un valor: ";
        cin>>valor;
        arr[i] = valor;
    }
    for (int i = 0; i < 10; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}