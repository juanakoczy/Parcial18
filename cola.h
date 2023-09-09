//
// Created by Usuario on 9/9/2023.
//

#ifndef PARCIAL18_COLA_H
#define PARCIAL18_COLA_H
#define TAM 5



typedef struct cola{

    int arreglo[TAM];
    int cabecera;
    int cola;
    int cont;
    int dato;

}Cola;


Cola * newCola ();
void insertar (Cola * cola, int dato);
void imprimir (Cola * cola);

#endif //PARCIAL18_COLA_H
