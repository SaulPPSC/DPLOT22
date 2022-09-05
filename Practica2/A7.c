#include <stdio.h>

/*Calcula el Área y Perímetro de un círculo.*/
float r,a,p;
float pi= 3.1416;

int main(){
  printf("Escribe el valor del radio y pulsa enter ");
    scanf("%f",&r);
    a = pi * r * r;
    p = pi * r * 2;
    printf("El valor del perimetro es %f \nel area es %f ",p,a);

return 0;

}