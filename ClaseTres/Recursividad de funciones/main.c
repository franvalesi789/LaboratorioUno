#include <stdio.h>
#include <stdlib.h>


int factorial(int);

int main()
{

    int numeroUno;
    int resultado ;

    printf("Ingrese un numero: ");
    scanf("%d", &numeroUno);

    resultado = factorial(numeroUno);

    printf("El factorial de %d es : %d", numeroUno, resultado);

    return 0;
}
int factorial(int numero)
{
    int resultado;

    if(numero == 0)
    {
        resultado = 1;
    }
    else
    {
        resultado = numero * factorial(numero - 1);
    }
    return resultado;
}




