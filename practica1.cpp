#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float calculadora();
int main ()
{
    int act;
    float resultado;
    printf("ingrese el numero de la actividad que va a realizar");
    printf("1. Calculadora");
    printf("2. Juego de azar");
    printf("3. calculadora de areas");
    scanf("%d",&act);
    switch (act)
    {
    case 1: 
        resultado=calculadora();
    }
    return 0;
}
float calculadora()
{
    float num1,num2,resul;
    int opci;
    printf("Ingrese el primer numero:\n");
    scanf("%f",&num1);
    printf("Ingrese el segundo numero:\n");
    scanf("%f",&num2);
    printf("ingrese el numero de la operacion que desea realizar?");
    printf("1. sumar");
    printf("2. restar");
    printf("3. multiplicar");
    printf("4. dividir");
    scanf("%d",opci);
    switch (opci)
    {
    case 1:
        resul=num1+num2;
        return resul;
        break;
    }

}