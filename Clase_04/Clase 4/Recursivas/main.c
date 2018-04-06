#include <stdio.h>
#include <stdlib.h>

int main()
{
     int numero=5;
    int i;
    int factor=1;
    for(i=numero; i>=1; i--)
    {
        factor=factor*i;
    }
    printf("El factorial es: %d",factor);
    return 0;

}


