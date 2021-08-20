//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I -  Coste de llamada

#include <stdio.h>

int main(){

    int min, exceso, costetotal, excesofinal;

    printf( "\n   Introduzca la cantidad de minutos que estuvo en llamada ");
    scanf( "%d", &min );

    printf("\n Nuestra linea cuenta con estos cargos:");
    printf("\n 3 minutos o menos = 10 pesos");
    printf("\n mas de 1 minuto = 5 pesos adicionales ");

    if ( min <= 3 ){
        costetotal = 10;
    }
        if (min > 3){
            exceso = min - 3;
            excesofinal = exceso*5;
            costetotal= 10 + excesofinal;
        }

    printf( "\n   ----El costo total de su llamada seria: %d ", costetotal);

    return 0;
}