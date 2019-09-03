#include <stdio.h>
#include <stdlib.h>

int funcion();

int main()
{
    int numero = 4;
    printf("El numero antes de modificar es: %d\n", numero);

    numero = funcion();
    printf("El numero despues de modificar es: %d", numero);
    return 0;
}

int funcion()
{
    int numero;
    numero = 100;
    return numero;
}
