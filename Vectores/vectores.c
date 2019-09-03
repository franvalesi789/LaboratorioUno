#include "vectores.h"

void cargarVector(int vector[], int tam)
{
    int i;
    printf("\tCARGA DE DATOS\n");
    for(i=0; i<tam; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &vector[i]);
    }
}

void mostrarMaximo(int vector[], int tam)
{
    int maximo;
    int i;
    maximo = calcularMaximo(vector, tam);


    for(i = 0; i < tam; i++)
    {
        if(vector[i] == maximo)
        {
            printf("%d", i);
        }
    }
    printf("MAXIMO: %d\n", maximo);
}

int calcularMaximo(int vector[], int tam)
{
    int flag = 0;
    int i;
    int maximo;
    for(i = 0; i < tam; i++)
    {
        if(flag == 0 || vector[i] > maximo)
        {
            maximo = vector[i];
        }
        flag = 1;
    }
    return maximo;

}

void ordenarVector(int vector[], int tam)
{
    int i;
    int j;
    int aux;

    for(i = 0; i < tam-1; i++)
    {
        for(j = i+1; j < tam; j++)
        {
            if(vector[i] > vector[j])
            {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }
    for(i=0; i<tam; i++)
            {
                printf("%d\n", vector[i]);
            }
}
