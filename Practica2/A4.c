#include <stdio.h>

/*Calcula los días que has vivido. Piensa como puedes
calcular los días de vida de una persona, Tip el año tiene 365 días.*/

int edad;
int main(){
 printf("Escribe tu edad y pulsa enter ");
 scanf("%d",&edad);
 edad = edad * 365;
printf("Tu edad en dias es %d",edad);

return 0;

}