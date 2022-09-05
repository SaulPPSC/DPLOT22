#include <stdio.h>
/*¿Cuál es el perímetro y área de un triángulo?
recuerda las fórmulas y codificalo*/

float l1,l2,l3,a;
float area,perimetro;

int main(){

    printf("Escribe el valor del lado 1 y pulsa enter ");
    scanf("%f",&l1);
    printf("Escribe el valor del lado 2 que es la base  y pulsa enter  ");
    scanf("%f",&l2);
    printf("Escribe el valor del lado 3 y pulsa enter ");
    scanf("%f",&l3);
    printf("Escribe el valor de la altura y pulsa enter ");
    scanf("%f",&a);

    perimetro = l1+l2+l3;
    area = l2*a;
    area = area/2;
    printf("El valor del perimetro es %f \nel area es %f ",perimetro,area);

return 0;

}