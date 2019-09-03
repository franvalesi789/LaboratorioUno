#include <stdio.h>
#include <stdlib.h>


int main()
{
    int vectorDeNumeros[10];
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
            printf("\tCARGA DE DATOS\n");
            for(i=0; i<10; i++)
            {
                printf("Ingrese un numero: ");
                scanf("%d", &vectorDeNumeros[i]);
            }
            break;
        case 2:
            printf("\tMUESTRO EL VECTOR\n");
            for(i=0; i<10; i++)
            {
                printf("%d\n", vectorDeNumeros[i]);
            }
            break;
        case 3:
            printf("\n\n\tMUESTRO SOLO LOS NEGATIVOS\n");
            for(i=0; i<10; i++)
            {
                if(vectorDeNumeros[i]<0)
                {
                    printf("%d\n", vectorDeNumeros[i]);
                }
            }
            break;
        case 4:
            for(i=0; i<10; i++)
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
            flag = 0;
            for(i = 0; i < 10; i++)
            {
                if(flag == 0 || vectorDeNumeros[i] > maximo)
                {
                    maximo = vectorDeNumeros[i];
                }
                flag = 1;

            }
            printf("MAXIMO: %d", maximo);
            break;
        case 6:
            flag = 0;
            for(i = 0; i < 10; i++)
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
    }
    while(opcion != 7);

    return 0;

}







