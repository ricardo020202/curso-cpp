#include <iostream>

using namespace std;

int main(){
    // int edad = 0;
    int suma = 0;


    for(int i = 1; i <= 10; i++){
        suma += i;
        cout<<i<<". "<<suma<<endl;
    }
    cout<<"Resultado final de la sumatoria: "<<suma<<endl;

    return 0;
}