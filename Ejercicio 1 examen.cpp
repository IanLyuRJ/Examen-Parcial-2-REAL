#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//EJERCICIO 1 NUM ALEATORIOS 
int main() {
    srand(time(0));

    int numOperaciones = rand() % 10;
    int resultado, i;

    printf("Numero de operaciones a realizar: %d\n", numOperaciones);

    for (i = 0; i < numOperaciones; i++) {
        int num1 = rand() % 100;
        int num2 = rand() % 100;
        int operacion = rand() % 6; 

        switch (operacion) {
            case 0: 
                resultado = num1 + num2;
                printf("Operacion: Suma \n");
                printf("%d + %d = %d\n", num1, num2, resultado);
                break;

            case 1: 
                resultado = num1 - num2;
                printf("Operacion: Resta \n");
                printf("%d - %d = %d\n", num1, num2, resultado);
                break;

            case 2: 
                resultado = num1 * num2;
                printf("Operacion: Multiplicacion \n");
                printf("%d * %d = %d\n", num1, num2, resultado);
                break;

            case 3: 
              
                while(num2 == 0) {
                    num2 = rand() % 100;
                }
                resultado = num1 / num2;
                printf("Operacion: Division \n");
                printf("%d / %d = %d\n", num1, num2, resultado);
                break;

            case 4: 
                printf("Operacion: Terminar el programa \n");
                return 0; 

            default:
                printf("Opcion no valida \n");
                break;
        }
    }

    return 0;
}


