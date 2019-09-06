#include "operaciones.h"
#include <stdio.h>

/*************************************************************SUMA********************************************************************/

/** \brief Solicita dos n�meros al usuario, los suma y luego devuelve el resultado.
 *
 * \param Resultado es el resultado a ser mostrado.
 * \return El resultado de la suma entre los dos n�meros ingresados por el usuario.
 *
 */

int getSuma()
{
    int a;
    int b;
    int resultado;

    printf("\n Ingrese un numero: ");
    scanf("%d",&a);
    printf("\n Ingrese otro numero: ");
    scanf("%d", &b);
    resultado = (a+b);
    printf("El resultado de la suma es: %d \n",resultado);

    return resultado;

}
/*************************************************************RESTA*******************************************************************/

/** \brief Solicita dos n�meros al usuario, los resta y luego devuelve el resultado.
 *
 * \param Resultado es el resultado a ser mostrado.
 * \return El resultado de la resta entre los dos n�meros ingresados por el usuario.
 *
 */

int getResta()
{
    int a;
    int b;
    int resultado;

    printf("\n Ingrese un numero: ");
    scanf("%d",&a);

    printf("\n Ingrese otro numero: ");
    scanf("%d", &b);
    resultado = (a-b);
    printf("El resultado de la resta es: %d \n",resultado);

    return resultado;
}
/***********************************************************DIVISI�N*******************************************************************/

/** \brief Solicita dos n�meros al usuario, los divide y luego devuelve el resultado.
 *
 * \param Resultado es el resultado a ser mostrado.
 * \return El resultado de la divisi�n entre los dos n�meros ingresados por el usuario.
 *
 */

float getDivision()
{
    float a;
    float b;
    float resultado;

    printf("\n Ingrese un numero: ");
    scanf("%f",&a);

    printf("\n Ingrese otro numero: ");
    scanf("%f", &b);
    while(b == 0)
    {
        printf("ERROR. NO SE PUEDE DIVIDIR POR 0.INGRESE OTRO NUMERO");
        scanf("%f", &b);
    }
    resultado = (a/b);
    printf("El resultado de la division es: %.1f \n",resultado);

    return resultado;
}
/******************************************************MULTIPLICACI�N******************************************************************/

/** \brief Solicita dos n�meros al usuario, los multiplica y luego devuelve el resultado.
 *
 * \param Resultado es el resultado a ser mostrado.
 * \return El resultado de la multiplicaci�n entre los dos n�meros ingresados por el usuario.
 *
 */

int getMultiplicacion()
{
    int a;
    int b;
    int resultado;

    printf("\n Ingrese un numero: ");
    scanf("%d",&a);

    printf("\n Ingrese otro numero: ");
    scanf("%d", &b);
    resultado = (a*b);
    printf("El resultado de la multiplicacion es: %d \n",resultado);

    return resultado;
}
/**********************************************************FACTORIAL******************************************************************/

/** \brief Solicita un n�mero al usuario, saca el factorial del mismo y luego lo muestra.
 *
 * \param Factorial es el factorial del n�mero ingresado.
 * \return El factorial del n�mero ingresado por el usuario.
 *
 */

int getFactorial()
{
    int i;
    int numero;
    int factorial=1;

    printf("\n Ingrese un numero: ");
    scanf("%d", &numero);

    for(i=numero; i>1; i--)
    {
        factorial = factorial*i;
    }
    printf("El factorial de %d es: %d \n",numero,factorial);

    return factorial;
}

