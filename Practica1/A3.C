#include <stdio.h>
#include <locale.h>
/*
Leer el nombre, edad y fecha de cumpleaños de una persona, y al final
desplegarlos en pantalla con un mensaje en diferentes líneas lo siguiente

Buenos días (nombre), te estábamos esperando
Tu edad es: (edad) años
Fecha de cumpleaños: (fecha)*/

int edad;
char nombre[19]= "ejemplo";
char fecha[19]= "";
int main(){

    printf("Escribe tu primer nombre y pulsa enter ");
    scanf("%s",nombre);
    printf("Escribe tu edad y pulsa enter ");
    scanf("%d",&edad);
    printf("Escribe tu fecha de cumplea%cos en formato dd-mm-aaaa  y pulsa enter ",164);
    scanf("%s",fecha);

    printf("Buenos días %s, te estábamos esperando\nTu edad es: %d a%cos\nFecha de cumplea%cos: %s",nombre,edad,164,164,fecha);

    return 0;
}