#include <iostream>
using namespace std;
void cout_tablero(string tablero[3][3]); 
bool verifying_winner (string tablero[3][3]);
int main(){

    string tablero[3][3] = {
        {"-", "-", "-"},
        {"-", "-", "-"},
        {"-", "-", "-"}};
     
    int fila;
    int columna;

    string simbol[2] = {"X", "O"}; 
    bool endGame = false;
    int turn = 0;


    while (!endGame){
     
        cout_tablero(tablero);
        cout << "\n JUGADOR: "<< simbol[turn] <<" Ingresa el número de fila, desde 0 - 2: ";
        cin >> fila;
        cout << "\n JUGADOR: "<< simbol[turn] <<" Ingresa el número de columna, desde 0 - 2 :";
        cin >> columna;
        
  //      cout << "\n El espacio marcado se encuentra en la fila: "<< fila << " y columna: "<< columna << "\n";

        tablero[fila][columna] = simbol[turn];

        if (verifying_winner(tablero)){break;};
        if (turn == 0){ turn = 1;} else {turn= 0;}

    }
    return 0;
}


void cout_tablero(string tablero[3][3]){
    cout << "\n";
    for ( int i=0; i<3; i++){
        for ( int j=0; j<3; j++){
        cout << tablero[i][j] << "  ";
        }
        cout << "\n";
    }
}

bool verifying_winner (string tablero[3][3]){
    string simbol[2] = {"X", "O"}; 
    bool winner_found = false;


    for (int i = 0;i <2; i++){

        for (int fila = 0; fila < 3 && !winner_found; fila++){

            if (tablero[fila][0] == simbol[i] && tablero[fila][1] == simbol[i] && tablero[fila][2] == simbol[i]){
                cout << "El jugador con símbolo: " << simbol[i] << " es el ganador! \n FELICIDADES " << simbol[i]<<"! \n";
                winner_found = true;
                cout_tablero(tablero);
                break;
            } 

        }


        for (int columna = 0; columna < 3 && !winner_found; columna++){

            if (tablero[0][columna] == simbol[i] && tablero[1][columna] == simbol[i] && tablero[2][columna] == simbol[i]){
                cout << "El jugador con símbolo: " << simbol[i] << " es el ganador! \n FELICIDADES" << simbol[i]<<"! \n";
                winner_found = true;
                cout_tablero(tablero);
                break;
            } 

        }


        if (!winner_found){
            if (tablero[0][0] == simbol[i] && tablero[1][1] == simbol[i] && tablero[2][2] == simbol[i]) {
                cout << "El jugador con símbolo: " << simbol[i] 
                     << " es el ganador! \nFELICIDADES " << simbol[i] << "!\n";
                     cout_tablero(tablero);
                winner_found = true;
            } else if (tablero[0][2] == simbol[i] && tablero[1][1] == simbol[i] && tablero[2][0] == simbol[i]) {
                cout << "El jugador con símbolo: " << simbol[i] 
                     << " es el ganador! \nFELICIDADES " << simbol[i] << "!\n";
                     cout_tablero(tablero);
                winner_found = true;
            }
        }
        

    }

    return winner_found;
}