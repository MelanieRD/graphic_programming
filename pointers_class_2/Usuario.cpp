#include <iostream>
#include "Usuario.h"

Usuario::Usuario(std::string nombre, std::string apellido, std::string usuario): _nombre(nombre), _apellido(apellido), _usuario(usuario) {
}

void Usuario::Saludar() {
    std::cout << _nombre << " dice: Hola!" << std::endl;
}
