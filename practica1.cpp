#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float calculadora(float num1, float num2);
int main ()
{
    int act;
    float resultado,resul;
    float num1,num2;
    printf("ingrese el numero de la actividad que va a realizar:\n");
    printf("1. Calculadora\n");
    printf("2. Juego de azar\n");
    printf("3. calculadora de areas\n");
    scanf("%d",&act);
    switch (act)
    {
    case 1: 
        printf("Ingrese el primer numero:\n");
        scanf("%f",&num1);
        printf("Ingrese el segundo numero:\n");
        scanf("%f",&num2);
        resultado = calculadora(num1,num2);
        printf("El resultado es: %.2f\n", resultado);
        break;
    }
    return 0;
}
float calculadora(float resul)
{
    float num1,num2;
    int opci;
    printf("ingrese el numero de la operacion que desea realizar?\n");
    printf("1. sumar\n");
    printf("2. restar\n");
    printf("3. multiplicar\n");
    printf("4. dividir\n");
    scanf("%d",&opci);
    switch (opci)
    {
    case 1:
        resul=num1+num2;
        break;
    case 2:
        resul=num1-num2;
        break;
    case 3:
        resul=num1*num2;
        break;
    case 4:
        if (num2 != 0) {
                resul = num1 / num2;
            } else {
                printf("No es posible dividir por cero.\n");
            }
        break;
    default:
        printf("no valido");
        break;
    }
    return resul;
}