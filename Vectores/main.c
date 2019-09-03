#include <stdlib.h>
#include "vectores.h"
#define T 10

int main()
{
    int vectorDeNumeros[T];
    int i;
    int contadorDePositivos = 0;
    int sumaDePositivos = 0;
    float promedioPositivos;
    int maximo;
    int minimo;
    int flag;
    int opcion;

    do
    {
        printf("1. Cargar numeros\n");
        printf("2. Mostrar todo\n");
        printf("3. Mostrar negativos\n");
        printf("4. Mostrar promedio de positivos\n");
        printf("5. Mostrar maximo\n");
        printf("6. Mostrar minimo\n");
        printf("7. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", & opcion );
        switch(opcion)
        {
        case 1:
            cargarVector(vectorDeNumeros, T);
            break;
        case 2:
            printf("\tMUESTRO EL VECTOR\n");
            for(i=0; i<T; i++)
            {
                printf("%d\n", vectorDeNumeros[i]);
            }
            break;
        case 3:
            printf("\n\n\tMUESTRO SOLO LOS NEGATIVOS\n");
            for(i=0; i<T; i++)
            {
                if(vectorDeNumeros[i]<0)
                {
                    printf("%d\n", vectorDeNumeros[i]);
                }
            }
            break;
        case 4:
            for(i=0; i<T; i++)
            {
                if(vectorDeNumeros[i]>=0)
                {
                    sumaDePositivos += vectorDeNumeros[i];
                    contadorDePositivos++;
                }
            }
            promedioPositivos = (float)sumaDePositivos/contadorDePositivos;
            printf("\n\n\PROMEDIO DE POSITIVOS: %.2f\n\n", promedioPositivos);
            break;
        case 5:
            mostrarMaximo(vectorDeNumeros, T);
            break;
        case 6:
            flag = 0;
            for(i = 0; i < T; i++)
            {

                if(flag == 0 || vectorDeNumeros[i] < minimo)
                {
                    minimo = vectorDeNumeros[i];
                }
                flag = 1;
            }
            printf("MINIMO: %d", minimo);

            break;
        default:
            printf("Esa no es una opcion valida.");

        }
        system("pause");
        system("cls");
    }
    while(opcion != 7);

    return 0;

}



