
#pragma once
#include <string>


class Impresora{
    public:
    Impresora(std::string _modelo);
    void imprimir(std::string _info);

    private:
    std::string _modelo;
};