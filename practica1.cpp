/*
Nombre del archivo: practica1.c
Autor: Lizeth Barrios Retana
Fecha de creación: 29 de Agosto de 2023
Descripción: Este codigo contiene 3 opciones para ejecutar el codigo, una calculadora de operaciones basicas, un juego de azar y una calculadora para areas.
*/

// Librerías
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

// Definición de funciones
float calculadora(float num1, float num2);      // Función para realizar operaciones matemáticas
float areaTriangulo(float base, float altura);  // Función para calcular el área de un triángulo
float areaCirculo(float radio);                 // Función para calcular el área de un círculo
float areaRectangulo(float base, float altura); // Función para calcular el área de un rectángulo
float areaCubo(float lado);                     // Función para calcular el área de un cubo
float areaCilindro(float radio, float altura);  // Función para calcular el área de un cilindro

// Función principal
int main()
{
    // Definición de variables
    int act;          // Variable para almacenar la elección de actividad del usuario
    float resultado;  // Almacena el resultado de operaciones matemáticas
    float num1, num2; // Almacenan los números ingresados por el usuario
    int opcion;       // Almacena la elección de figura geométrica para calcular el área
    float area;       // Almacena el resultado del cálculo del área

    // Menú de opciones
    printf("Ingrese el número de la actividad que va a realizar:\n");
    printf("1. Calculadora\n");
    printf("2. Juego de azar\n");
    printf("3. Calculadora de áreas\n");
    scanf("%d", &act);

    switch (act)
    {
    case 1:
        // Calculadora
        printf("Ingrese el primer número:\n");
        scanf("%f", &num1);
        printf("Ingrese el segundo número:\n");
        scanf("%f", &num2);
        resultado = calculadora(num1, num2);
        printf("El resultado es: %.2f\n", resultado);
        break;
    case 2:
        // Juego de adivinanza
        srand(time(NULL));                      // Inicializar generador de números aleatorios
        int numeroAleatorio = rand() % 100 + 1; // Generar número aleatorio entre 1 y 100
        int intento, intentosRealizados = 0;

        printf("Bienvenido al juego de adivinar el número!\n");

        while (1)
        {
            printf("Intenta adivinar el número (entre 1 y 100): ");
            scanf("%d", &intento);
            intentosRealizados++;

            if (intento < numeroAleatorio)
            {
                printf("Demasiado bajo. Intenta nuevamente.\n");
            }
            else if (intento > numeroAleatorio)
            {
                printf("Demasiado alto. Intenta nuevamente.\n");
            }
            else
            {
                printf("¡Felicitaciones! ¡Adivinaste el número %d en %d intentos!\n", numeroAleatorio, intentosRealizados);
                break;
            }
        }
        break;
    case 3:
        // Calculadora de áreas
        printf("Calculadora de áreas\n");
        printf("1. Triángulo\n");
        printf("2. Círculo\n");
        printf("3. Rectángulo\n");
        printf("4. Cubo\n");
        printf("5. Cilindro\n");
        printf("Ingrese el número correspondiente a la figura: ");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            // Área de un triángulo
            float base, altura;
            printf("Ingrese la base del triángulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del triángulo: ");
            scanf("%f", &altura);
            area = areaTriangulo(base, altura);
            break;
        case 2:
            // Área de un círculo
            float radio;
            printf("Ingrese el radio del círculo: ");
            scanf("%f", &radio);
            area = areaCirculo(radio);
            break;
        case 3:
            // Área de un rectángulo
            float base, altura;
            printf("Ingrese la base del rectángulo: ");
            scanf("%f", &base);
            printf("Ingrese la altura del rectángulo: ");
            scanf("%f", &altura);
            area = areaRectangulo(base, altura);
            break;
        case 4:
            // Área de un cubo
            float lado;
            printf("Ingrese el lado del cubo: ");
            scanf("%f", &lado);
            area = areaCubo(lado);
            break;
        case 5:
            // Área de un cilindro
            float radio, altura;
            printf("Ingrese el radio del cilindro: ");
            scanf("%f", &radio);
            printf("Ingrese la altura del cilindro: ");
            scanf("%f", &altura);
            area = areaCilindro(radio, altura);
            break;
        default:
            printf("Opción no válida.\n");
            return 1;
        }

        printf("El área es: %.2f\n", area);
        break;
    default:
        printf("Opción no válida.\n");
        break;
    }

    return 0;
}

// Función calculadora
float calculadora(float num1, float num2)
{
    float resul = 0;
    int opci;

    // Menú de operaciones
    printf("Ingrese el número de la operación que desea realizar:\n");
    printf("1. Sumar\n");
    printf("2. Restar\n");
    printf("3. Multiplicar\n");
    printf("4. Dividir\n");
    scanf("%d", &opci);

    switch (opci)
    {
    case 1:
        resul = num1 + num2;
        break;
    case 2:
        resul = num1 - num2;
        break;
    case 3:
        resul = num1 * num2;
        break;
    case 4:
        if (num2 != 0)
        {
            resul = num1 / num2;
        }
        else
        {
            printf("No es posible dividir por cero.\n");
        }
        break;
    default:
        printf("Operación no válida.\n");
        break;
    }

    return resul;
}

// Función para calcular el área de un triángulo
float areaTriangulo(float base, float altura)
{
    return 0.5 * base * altura;
}

// Función para calcular el área de un círculo
float areaCirculo(float radio)
{
    return M_PI * radio * radio;
}

// Función para calcular el área de un rectángulo
float areaRectangulo(float base, float altura)
{
    return base * altura;
}

// Función para calcular el área de un cubo
float areaCubo(float lado)
{
    return 6 * lado * lado;
}

// Función para calcular el área de un cilindro
float areaCilindro(float radio, float altura)
{
    return 2 * M_PI * radio * (radio + altura);
}
