#include <stdio.h>

/*Pide 5 números diferentes (combina entre enteros y decimales).
Posteriormente, guárdalos en variables diferentes y posteriormente despliega sus valores en
una misma salida separados por una coma.*/

int n1,n2,n3;
float n4,n5;


int main(){

    printf("Escribe el primer numero entero  y pulsa enter ");
    scanf("%d",&n1);
    printf("Escribe el segundo numero entero  y pulsa enter ");
    scanf("%d",&n2);
    printf("Escribe el tercer numero entero  y pulsa enter ");
    scanf("%d",&n3);
    printf("Escribe el cuarto numero decimal y pulsa enter ");
    scanf("%f",&n4);
    printf("Escribe el quinto numero decimal  y pulsa enter ");
    scanf("%f",&n5);

    printf("1. %d 2. %d 3. %d 4. %f 5. %f",n1,n2,n3,n4,n5);

    
    return 0;
}