#pragma once

#include <string>

class Usuario {
public:
    Usuario(std::string nombre, std::string apellido, std::string usuario);
    void Saludar();

private:
    std::string _nombre;
    std::string _apellido;
    std::string _usuario;
};
