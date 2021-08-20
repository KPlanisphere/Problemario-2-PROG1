//Jesús Huerta Aguilar, Javier de La Luz Ruiz, Ernesto Flores Cesareo
//Programación I - "Programa: Codigo de verificación"
#include <conio.h>
#include <stdio.h>
int main(){
    //Declarar variables
    int codi;
    printf("Ingrese el codigo de indentificador: ");
    scanf("%d",&codi);
    //Verificador
    if(codi < 1000 && codi > 99){
        printf("\nCodigo Valido.");
        printf("\nSu puesto es: ");
        if (codi%2==0 && codi%3==0 && codi%5==0){ //300
            printf("DIRECTOR GENERAL");
        }
        if (codi%3==0 && codi%5==0 && codi%2!=0){ //375
            printf("DIRECTIVO");
        }
        if (codi%2==0 && codi%5!=0 && codi%3!=0){ //394
            printf("STAFF");
        }
        if (codi%2!=0 && codi%5!=0 && codi%3!=0){
            printf("SEGURIDAD"); //397
        }  
    } 
    else{
        printf("\nCodigo NO Valido.");
        printf("\nEl codigo debe de ser de 3 cifras");
    }
}