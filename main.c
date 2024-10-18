#include <stdio.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    char nombreProductos[10][50];
    float precioProductos[10];

    leerProducto(nombreProductos,precioProductos,1,0);

    imprimirProducto(nombreProductos,precioProductos,1,0);

    char nombreABuscar[50]="Arroz";

    buscarProductoXNombre(nombreProductos,precioProductos,nombreABuscar);

    return 0;
}