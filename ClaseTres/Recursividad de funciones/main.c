#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numeroUno;
    int resultado = 1;
    int i;

    printf("Ingrese un numero: ");
    scanf("%d", &numeroUno);

    for(i = numeroUno; i > 0 ; i--)
    {

        resultado = resultado * i;

    }
    printf("El factorial de %d es : %d", numeroUno, resultado);

    return 0;
}





