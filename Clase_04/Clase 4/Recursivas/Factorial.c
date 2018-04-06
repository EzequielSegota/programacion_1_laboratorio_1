#include <stdio.h>
#include <stdlib.h>

/** \brief Calcula el factorial de un numero
 *
 * \param numero
 * \return El factorial del numero como parametro
 *
 */

int factorial(int);


int main()
{
    int numero;
    int factor;

    printf("Ingrese un numero: ");
    scanf("%d", &numero);

    factor=factorial(numero);
    printf("El factorial de %d es %d", numero, factor);

    return 0;
}

int factorial(int numero)
{
    int respuesta;
    if(numero==0)
    {
        respuesta=1;
    }
    else
    {
        respuesta=numero*factorial(numero-1);
    }

    return respuesta;
}
