#include "impresora.h"
#include <iostream>
#include <string>

Impresora::Impresora(std::string modelo): _modelo(modelo){

    std::cout << "Se ha creado la impresora modelo: " << modelo << std::endl;
}


void Impresora::imprimir( std::string info){
    std::cout << "Imprimiendo..." << info << std::endl;
    std::cout << "info iimprento exitosamente con la impresora modelo: " << _modelo << std::endl;
}