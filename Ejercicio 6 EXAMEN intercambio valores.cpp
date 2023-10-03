#include <stdio.h>
//EJERCICIO INTERCAMBIO DE VALORES
int main(){

    int v1, v2, v3, temp;

    printf ("Escribe el valor 1: ");
    scanf("%d", &v1);

    printf ("Escribe el valor 2: ");
    scanf("%d", &v2);

    printf ("Escribe el valor 3: ");
    scanf("%d", &v3);

  
    temp = v1; 
    v1 = v3;  
    v3 = v2;   
    v2 = temp; 
	
    printf ("La variable 1 vale: %d \n", v1);
    printf ("La  variable 2 vale: %d \n", v2);
    printf ("La  variable 3 vale: %d \n", v3);
	
    return 0;
}

