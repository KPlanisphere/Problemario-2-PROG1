#include <stdio.h>
int main(){
    int A, B, C, D, Mayor;
    printf("Ingrese el primer numero entero(A)\n ");
    scanf("%d", &A);
    printf("Ingresa el seguno numero entero(B)\n ");
    scanf("%d", &B);
    printf("Ingrese el tercer numero entero (C)\n ");
    scanf("%d", &C);
    printf("Ingrese el cuarto numero entero(D)\n ");
    scanf("%d", &D);
    if( A > B && A > C && A > D ){
            Mayor = A;
    }else{
           if(B > A && B > C && B > D){
               Mayor=B;
           }else{
               if(C > A && C > B && C > D){
                   Mayor=C;
               }else
                   Mayor=D;
           }
       }
    printf("El numero mayor de todos es %d", Mayor);
   return 0;
}