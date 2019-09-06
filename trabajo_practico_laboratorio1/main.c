#include <stdio.h>
#include <stdlib.h>
#include "operaciones.h"

int main()
{
    char opcion;

    do
    {

        printf("1.SUMAR \n");
        printf("2.RESTAR \n");
        printf("3.DIVIDIR \n");
        printf("4.MULTIPLICAR \n");
        printf("5.FACTORIZAR \n");
        printf("6.SALIR \n");
        fflush(stdin);
        printf("\n ELIJA UNA OPCION: \n");
        scanf("%c",&opcion);
        fflush(stdin);


        switch(opcion)
        {
        case '1':
            printf("Usted esta sumando: \n");
            getSuma();
            break;
        case '2':
            printf("Usted esta restando: \n");
            getResta();
            break;
        case '3':
           printf("Usted esta dividiendo: \n");
           getDivision();
            break;
        case '4':
            printf("Usted esta multiplicando: \n");
            getMultiplicacion();
            break;
        case '5':
            printf("Usted esta sacando el factorial de un numero: \n");
            getFactorial();
            break;
        default:
            if(opcion != '6')
                {
                    printf(" '%c' NO ES UNA OPCION \n",opcion);
                }

        }

        system("pause");
        system("cls");

    }
    while(opcion != '6');

    return 0;
}
