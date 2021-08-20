//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I - Calculadora simple
#include <stdio.h>

int main(){

    int n1, n2, suma, resta, producto, residuo;
    float cociente;
    char op;

    printf( "\n   >>> MENU CALCULADORA <<<" );
    printf( "\n  Escoga la opcion que desee (1-5), se muestra a continuacion: ");
    printf( "\n   |+| o 1 Para suma");
    printf( "\n   |-| o 2 Para resta");
    printf( "\n   |*| o 3 Para producto");
    printf( "\n   |/| o 4 Para cociente");
    printf( "\n   |!| o 5 Para residuo \n");
    scanf( "%c", &op);
    printf( "\n   Introduzca la cantidad del primer entero: ");
    scanf( "%d", &n1 );
    printf( "\n   Introduzca la cantidad del segundo entero: ");
    scanf( "%d", &n2 );



  switch (op){
    case '1':
    case '+': 
            suma = n1+n2;
            printf("\n El total de la suma es: %d", suma);
    break;

    case '2': 
    case '-': 
            resta = n1-n2;
            printf("\n El total de la resta es: %d", resta);
    break;

    case '3':
    case '*':
            producto = n1*n2;
            printf("\n El total del producto es: %d", producto);
    break;

    case '4':
    case '/':
            cociente = n1/n2;
            printf("\n El total del cociente es: %f", cociente);
    break;

    case '5':
    case '!':
            residuo = n1%n2;
            printf("\n El total del residuo es: %d", residuo);
    break;

  default: printf("\n Operador no definido, intente de nuevo");
  }
    return 0;
}