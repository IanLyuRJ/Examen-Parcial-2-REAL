#include <stdio.h>
//EJERCICIO PIRAMIDE
int main() {
    int altura;

    
    printf("Ingrese la altura de la piramide: ");
    scanf("%d", &altura);

 
    for (int i = 1; i <= altura; i++) {
        
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        
        printf("\n");
    }

    return 0;
}

