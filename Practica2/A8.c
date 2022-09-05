#include <stdio.h>

/*Calcular el sueldo de un trabajador por día. Toma en
cuenta que la hora se paga en $150 y no se conoce el total de horas
trabajadas..*/

int ht,total;
int main(){

  printf("Escribe las horas trabajadas y pulsa enter ");
    scanf("%d",&ht);
    total = ht * 150;

    printf("El sueldo Total es de %d ",total);

return 0;

}