//se incluyen los archivos .h no los cpp explicación en el minuto 44

#include "impresora.h"
#include "Usuario.h"



int main(){

    //este está en el stack, desde que la función que lo contiene lo termina, se elimina de la memoria.
    Usuario melanie("Melanie", "MH", "MelanieRD");
    melanie.Saludar();

    // este está en el heap, aún termine la ejecución de la función, esto va a quedarse en la memoria.
    Usuario *delanie = new Usuario("Delanie", "HM", "DelanieGamerTaku");

    Impresora impresora("HP Impresora del destino");
    impresora.imprimir("Documento de texto, Kon'nichiwa!");



    return 0;

}