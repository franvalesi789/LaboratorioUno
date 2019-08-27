#include <stdio.h>
#include <stdlib.h>

int Sumar(int, int);

int main()
{
   int numeroUno;
   int numeroDos;
   int total;

   printf("Ingrese el primer valor: ");
   scanf("%d", & numeroUno);
   printf("Ingrese el segundo valor: ");
   scanf("%d", & numeroDos);

   total = Sumar(numeroUno, numeroDos);

   printf("La suma da: %d", total);

}

int Sumar(int numUno, int numDos){

    int resultado;

    resultado = numUno + numDos;

    return resultado;
}
