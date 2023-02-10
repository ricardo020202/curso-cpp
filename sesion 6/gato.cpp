// Autor: Jose Ricardo Rosales Castañeda
// Fecha: 09/02/2023
// Descripcion: Implementaion de un juego de gato 1 vs 1 
//              utilzando conceptos basicos de c++

#include <iostream>

using namespace std;

char casilla[10] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

// Ejemplo de matriz
// char casillas[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

// @brief: Funcion que imprime el tablero de juego
void Tablero() {
    system("cls");

    cout<<"\n\n\tJuego de Gato\n\n";
    cout<<"Jugador 1 (X) - Jugador 2 (O)"<<endl<<endl;
    cout<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<casilla[1]<<"  |  "<<casilla[2]<<"  |  "<<casilla[3]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<casilla[4]<<"  |  "<<casilla[5]<<"  |  "<<casilla[6]<<endl;
    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;
    cout<<"  "<<casilla[7]<<"  |  "<<casilla[8]<<"  |  "<<casilla[9]<<endl;
    cout<<"     |     |     "<<endl<<endl;
}

// @brief: Funcion para determinar ganador
// @return: 1 si hay ganador, 0 si hay empate y -1 si el juego continua
int Victoria(){
    // Revisar fila
    if(casilla[1] == casilla[2] && casilla[2] == casilla[3]){
        return 1;
    } else if(casilla[4] == casilla[5] && casilla[5] == casilla[6]){
        return 1;
    } else if(casilla[7] == casilla[8] && casilla[8] == casilla[9]){
        return 1;
    // Revisar columnas
    } else if(casilla[1] == casilla[4] && casilla[4] == casilla[7]){
        return 1;
    } else if(casilla[2] == casilla[5] && casilla[5] == casilla[8]){
        return 1;
    } else if(casilla[3] == casilla[6] && casilla[6] == casilla[9]){
        return 1;
    // Revisar diagonales
    } else if(casilla[1] == casilla[5] && casilla[5] == casilla[9]){
        return 1;
    } else if(casilla[3] == casilla[5] && casilla[5] == casilla[7]){
        return 1;
    // Revisar empate
    } else if(casilla[1] != '1' && casilla[2] != '2' && casilla[3] != '3' && casilla[4] != '4' && casilla[5] != '5' 
            && casilla[6] != '6' && casilla[7] != '7' && casilla[8] != '8' && casilla[9] != '9'){
        return 0;
    } 
    // Juego continua
    else{
        return -1;
    }
}

// @brief: Logica y ejecucion del juego
int main(){
    int jugador = 1, opcion, control;
    char marca;

    do{
        Tablero();

        if(jugador % 2){
            jugador = 1;
        }else{
            jugador = 2;
        }

        cout<<"Jugador "<<jugador<<" escoja una casilla: ";
        cin>>opcion;

        if(jugador == 1){
            marca = 'X';
        }else{
            marca = 'O';
        }

        if(opcion > 0 && opcion < 10){
            for(int i = 1; i < 10; i++){
                if(opcion == i && casilla[i] != 'X' && casilla[i] != 'O'){
                    casilla[i] = marca;
                }
            }
        } else{
            cout<<"Movimiento invalido ";
            jugador--;
            cin.ignore();
            cin.get();
        }

        control = Victoria();

        jugador++;

    }while(control == -1);

    Tablero();

    if(control == 1){
        cout<<"Ganador jugador "<<jugador--<<endl;
    } else{
        cout<<"Empate"<<endl;
    }

    cin.ignore();
    cin.get();
    return 0;
}