#include <stdio.h>
#include <stdlib.h>
/* Reglas Funciones
1.Lo que todos los lenguajes conmparten para definir una funcionalidad.Prototipo o Firma(Firma porque es ùnica, compuesta por el tipo de dato que retorna)
void saludar(void);
2.En la parte 2 esta el main
    main
    invocar funcion
3.Definir la funcionalidad, que va a hacer la funcion.Desarrollar la funcion o implementar la funcion.
void saludar(void)
{ printf("Hola Mundo!\n");}
*/
//void saludar(void);
//int sumar(int numeroUno,int numeroDos);
//float dividirEnteros(int numeroUno, int numeroDos);
int pedirNumeroPar();
int getEntero(char* mensaje,char* mensajeError,int minimo, int maximo);
int main()
{
    //saludar();
    //int resultado;

    int numero;
    numero=getEntero("Ingrese su edad:","Error ingrese edad entre 1 y 199",1,199);
    printf("el entero ingresado es: %d", numero);
    //float numero;
    /*int sePudo;
    sePudo=pedirNumeroPar();

    if(sePudo==0)
    {
        printf("Ok\n");
    }
    else
    {
        printf("Mal\n");
    }
    //resultado=sumar(3,3);
    numero=dividirEnteros(10,3);
    printf("%f\n",numero );
    */
    return 0;
}
int getEntero(char* mensaje,char* mensajeError,int minimo, int maximo)
{
    int retorno=-1;

    do
    {
        printf("%s", mensaje);
        scanf("%d", &retorno);
        if(retorno<maximo && retorno>minimo)
        {
            break;
        }
        printf("%s",mensajeError);
    }
    while(0);
    return retorno;
}

/*void saludar(void)
{
    printf("Hola Mundo!\n");
}*/
/*int sumar(int numeroUno,int numeroDos)
{
    int resultado;

    resultado=numeroUno+numeroDos;

    return resultado;
}*/
int pedirNumeroPar()
{
    int par=-1;
    int numeroUno;

    printf("Ingrese nùmero: ");
    scanf("%d",&numeroUno);

    if(numeroUno%2==0)
    {
        par=0;
    }

    return par;
}
/*float dividirEnteros(int numeroUno, int numeroDos)
{
    float numero=0;

    numero=(float)numeroUno/numeroDos;

    return numero;
}
*/
