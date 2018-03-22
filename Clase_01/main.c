#include <stdio.h>
#include <stdlib.h>

/**
*   ingresar caracteres no palabras
*   el mensaje saliente tenga un formato
*   su nombre es:"letra" su sueldo es:"x" su aumento es:"x%" entre 0 y 100 sueldo final="x"
*
*/
int main()
{
    char nombre;
    int porcentaje;
    float sueldo;
    float aumento;
    float sueldoFinal;

    printf("Ingrese nombre: ");
    scanf("%c",&nombre);
    printf("Ingrese sueldo: ");
    scanf("%f",&sueldo);
    printf("Ingrese el porcentaje de aumento: ");
    scanf("%d",&porcentaje);

    aumento=porcentaje*sueldo/100;
    sueldoFinal=sueldo+aumento;

    printf("%c \t-- %d \t-- %.2f \t-- %f",nombre,porcentaje,aumento,sueldoFinal);


    return 0;
}
