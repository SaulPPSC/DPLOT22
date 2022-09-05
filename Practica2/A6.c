#include <stdio.h>

/*Cual es el perímetro y área de un cuadrado.*/
int l,a,p;

int main(){
  printf("Escribe el valor del lado y pulsa enter ");
    scanf("%d",&l);
    a = l * l;
    p = l * 4;
    printf("El valor del perimetro es %d \nel area es %d ",p,a);

return 0;

}