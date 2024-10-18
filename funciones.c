#include <stdio.h>
#include "funciones.h"
#include <string.h>

void leerProducto(char nombres[10][50], float precios[10], int num, int i){
    printf("Ingrese el nombre del producto %d: ",num);
    scanf("%s",&nombres[i]);
    printf("Ingrese el precio del producto %d: ",num);
    scanf("%f",&precios[i]);
}

void imprimirProducto(char nombres[10][50], float precios[10], int num, int i){
    printf("#\t\tNombre\t\tPrecio\n");
    printf("%d\t\t%s\t\t%.2f\n",num,nombres[i],precios[i]);
}

void buscarProductoXNombre(char nombres[10][50], float precios[10], char nombreBuscar[50]){
    int encontrado=0;
    for (int i = 0; i < 10; i++)
    {
        if(strcmp(nombres[i],nombreBuscar)==0){
            int num=i+1;
            imprimirProducto(nombres,precios,num,i);
            encontrado=1;
        }
    }
    if(encontrado==0){
        printf("No existe el producto\n");
    }
    

}