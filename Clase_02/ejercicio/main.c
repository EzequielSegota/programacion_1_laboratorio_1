#include <stdio.h>
#include <stdlib.h>
//>Se ingresan numeros (distintos de 0), no se sabe cuantos.
/*
    Se pide mostrar:
    Cantidad pares e impares
    Porcentaje de num positivos y negativos
    Maximo y minimo
    Maximo par
    Cantidad de numeros comprendidos entre 125 y 236
*/
int main()
{
    char respuesta='s';
    int flag=0;
    int numero;
    int contadorPares=0;
    int contadorImpares=0;
    int contadorPostivos=0;
    int contadorNegativos=0;
    int min;
    int max;
    int maxPar=0;
    int contadorNum=0;
    float porcentajePositivos;
    float porcentajeNegativos;

    while(respuesta!='n')
    {
        contadorNum++;
        printf("Ingrese numero: ");
        scanf("%d",&numero);

        if(numero==0)
        {
            printf("Error, ingrese numero distinto de cero: ");
            scanf("%d",&numero);
        }
        if(numero%2==0)
        {
            if(numero>max || contadorPares==0)
            {
                maxPar=numero;
            }
            contadorPares++;


        }
        else
        {
            contadorImpares++;
        }

        if(numero>0)
        {
            contadorPostivos++;
        }
        else
        {
            contadorNegativos++;
        }

        /*if(flag==0)
        {
            min=numero;
            max=numero;
            flag=1;
        }
        else
        {
            if(numero<min)
            {
                min=numero;
            }
            if(numero>max)
            {
                max=numero;
            }
        }*/
        if(flag==0 || numero>max)
        {
            max=numero;
        }
        if(flag==0 || numero<min)
        {
            min=numero;
            flag=1;
        }

        /*if(numero>maxPar && numero%2==0)
        {
                maxPar=numero;
        }
        */

        if(numero<236 && numero>125)
        {
            contadorNum++;
        }

        printf("Ingrese n para detener \n");
        respuesta=getch();
    }

    printf("La cantidad de pares es: %d \n",contadorPares);
    printf("La cantidad de impares es: %d \n",contadorImpares);
    porcentajePositivos=(float)contadorPostivos*100/contadorNum;
    porcentajeNegativos=100-porcentajePositivos;
    printf("El porcentaje de positivos es: %.2f \n",porcentajePositivos);
    printf("El porcentaje de negativos es: %.2f \n",porcentajeNegativos);
    printf("El numero minimo fue: %d \n",min);
    printf("El numero maximo fue: %d \n",max);
    if(maxPar!=0)
    {
        printf("El maximo par fue: %d \n",maxPar);
    }
    else
    {
        printf("No hay maximo par \n");
    }

    printf("Los numeros comprendidos entre 125 y 236 son: %d \n",contadorNum);


    return 0;
}
