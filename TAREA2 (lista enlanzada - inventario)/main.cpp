
#include "inventario.h"
#include "objeto.h"
#include <iostream>
#include <string>

int main(){
    Inventario inventarioDeJugador;

    // agregué algunas para no esté vacío D: hihi

    inventarioDeJugador.agregar(objeto(123, "Pocima de curación", 5));
    inventarioDeJugador.agregar(objeto(223, "Espada de Fuego", 1));
    inventarioDeJugador.agregar(objeto(323, "Zapatos de Roble mágicos", 1));
    inventarioDeJugador.agregar(objeto(423, "Pechera de Escorpión", 1));
    inventarioDeJugador.agregar(objeto(542, "Manzanas Doradas", 3));

   int valor;

   do {
    std::cout<< "\n -------------------------------------------------------------- \n";
    std::cout << "\n Hola, jugador! \n Que deseas realizar?" << std::endl;
    std::cout <<"\n 1. Mostrar objetos de inventario \n 2. Agregar objeto \n 3. Editar objeto \n 4. Eliminar objeto \n 5. salir \n\n Respuesta: ";
    std::cin >> valor;

    switch (valor) {
        case 1:  inventarioDeJugador.mostrar(); break;
        case 2:  {
            std::string nombre;
            int id;
            int cantidad;

            std::cout<< "\n Ingrese el id (Numeros): ";
            std::cin >> id;
            std::cout<< "\n Ingrese el nombre de objeto: ";
            std::cin.ignore(); 
            std::getline(std::cin, nombre);
            std::cout<< "\n Ingrese la cantidad (Numeros): ";
            std::cin >> cantidad;

            inventarioDeJugador.agregar(objeto(id, nombre, cantidad));
            break;
        }

        case 3: inventarioDeJugador.modificar(); break;

        case 4: inventarioDeJugador.eliminar(); break;
        default: std::cout << "Se esperaba una respuesta diferente D:" << std::endl; break;
    }



} while (valor != 5);
std::cout<< "\n --------------------------------------------------------------------------------- \n";
    return 0;
}