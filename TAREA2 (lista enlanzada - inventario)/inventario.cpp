#include "inventario.h"
#include "objeto.h"
#include <iostream>
#include <ostream>
#include <string>

void Inventario::agregar(objeto objetoAAgregar){
    Nodo* NodoNuevo = new Nodo();
    NodoNuevo->datos = objetoAAgregar;

    NodoNuevo->siguiente = lista;

    lista = NodoNuevo;
}

void Inventario::mostrar(){

   Nodo* actual = lista;

   while(actual!= nullptr){

        std::cout <<"id: "<< actual->datos.id <<" objeto: " << actual->datos.nombre << " cantidad: " << actual->datos.cantidad << std::endl;
        actual = actual->siguiente;
   }
}

void Inventario::modificar(){
   
    Nodo* actual = lista;
    std::string valor;
    int valorNumerico;

    std::cout << " Seleccione el objeto que quiera editar, Pulse:  1. Para seleccionar. 2. Pasar al siguiente (Puede ser cualquier otra letra)" << std::endl;
    std::cout << "1. editar objeto, 2. siguiente objeto " <<std::endl;

    while(actual != nullptr){

        std::cout <<"id: "<< actual->datos.id <<" objeto: " << actual->datos.nombre << " cantidad: " << actual->datos.cantidad << std::endl;
        std::cin >> valor;

        if (valor == "1"){

            std::cout << "Nuevo nombre de objeto: ";
            std::cin.ignore(); 
            std::getline(std::cin, valor);
            actual->datos.nombre = valor;

            std::cout << "cantidad de objetos en inventario (Números): ";
            std::cin >> valorNumerico;
            actual->datos.cantidad = valorNumerico;

            std::cout<<"Objeto modificado satisfactoriamente :D<3! Resultado: "<<std::endl;
            std::cout <<"id: "<< actual->datos.id <<" objeto: " << actual->datos.nombre << " cantidad: " << actual->datos.cantidad << std::endl;
            break;
        } else { actual = actual->siguiente; }
       

    }

}

void Inventario::eliminar(){

    Nodo* actual = lista;
    Nodo* anterior = nullptr;
    std::string valor;

    std::cout << " Seleccione el objeto que quiera eliminar, Pulse:  1. Para seleccionar. 2. Pasar al siguiente (Puede ser cualquier otra letra)" << std::endl;
    std::cout << "1. editar objeto, 2. siguiente objeto " <<std::endl;

    while(actual != nullptr){
        std::cout <<"id: "<< actual->datos.id <<" objeto: " << actual->datos.nombre << " cantidad: " << actual->datos.cantidad << std::endl;

   
        std::cin >> valor;
        
        if (valor == "1"){

            if (anterior == nullptr){
                 lista = actual->siguiente;
            } else {
                anterior->siguiente = actual->siguiente; 
            }

            delete actual;  
            std::cout << "Objeto eliminado";
            break;
        } else { 
            anterior = actual;
            actual = actual->siguiente; 
        }
       
    }
}