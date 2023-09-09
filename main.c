//Definiendo una estructura de datos, funcion encolar, para una cola circular implementada en un
//arreglo de 5 posiciones

#include <stdio.h>
#include "cola.h"

int main() {
Cola * cola = newCola();

    insertar(cola,1);
    insertar(cola,2);
    insertar(cola,3);
    insertar(cola,4);
    insertar(cola,5);


    imprimir(cola);




    return 0;
}
