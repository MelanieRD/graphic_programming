#pragma once
#include <string>


struct objeto{
    int id;
    std::string nombre;
    int cantidad;

    objeto() {}

    objeto(int _id, std::string _nombre, int _cantidad) {
        id = _id;
        nombre = _nombre;
        cantidad = _cantidad;
    }
};


struct Nodo{
    objeto datos;
    Nodo* siguiente;
};