#pragma  once
#include <string>
#include "objeto.h"


class Inventario{
    public:
    Inventario(){
        lista = nullptr; // leí que así debo de inicializarlo cuando estén vacías
    }

       void agregar( objeto);
       void modificar();
       void eliminar ();
       void mostrar ();

    private:
    Nodo* lista;
};