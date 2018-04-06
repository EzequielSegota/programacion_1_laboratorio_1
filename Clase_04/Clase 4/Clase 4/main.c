#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"

 void sumarUno(void);

int main()
{
    int suma();


    return 0;
}

 void sumarUno(void)
{
    int numeroUno;
    int numeroDos;
    int suma;

  numeroUno=pedirEntero("Ingrese numero uno: ", 1, 1000);
  numeroDos=pedirEntero("Ingrese numero dos: ",1,1000);
  suma=numeroUno+numeroDos;

  return;
}
