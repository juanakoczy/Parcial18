//
// Created by Usuario on 9/9/2023.
//

#include "cola.h"
#include "stdio.h"
#include "malloc.h"
#define TAM 5


Cola * newCola () {

    Cola * aux = NULL;
    aux = malloc(sizeof (TAM));//asigno el tamaño 5 a newcola

    if (aux == NULL){
        printf ("No hay espacio de memoria suficiente.");
        exit(-1);
    }
    else{
        aux->cabecera = 0;
        aux->cola = 0;
        aux->cont = 0;
    }
    return aux;
}
void insertar (Cola * cola, int dato){
    Cola * aux = cola;
  if (aux->cont!=TAM){//mientras la cola tiene espacio
        cola->arreglo[cola->cola]= dato;//en el campo arreglo en la posicion cola inserto el dato
        cola->cola = (cola->cola+1) % TAM;//avanzo y divido por el tamaño para no salir del arreglo
        cola->cont++;//aumento el contador
    }

    if (aux->cont > TAM){// si la cola esta llena no se puede insertar
        printf("La Cola esta llena.");
        exit(-1);
    }

}

void imprimir(Cola *cola) {
    int i = cola->cabecera;//arreglo en el espacio cabecera
    for (int j = 0; j < cola->cont; j++) {//arreglo en el espacio cola, mientras en menor avanzo
        printf("%d ", cola->arreglo[i]);
        i = (i + 1) % TAM;//Avanzo y divido para no salir del arreglo
    }
}
