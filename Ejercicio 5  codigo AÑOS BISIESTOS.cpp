#include <stdio.h>
//CODIGO AÑOS BISIESTOS
int main () {
	
	int a = 0;
	
	printf ("Escribe un agno: ");
	scanf ("%d", &a);
	
	if ( ((a % 4 == 0) && (a % 100 != 0)) || (a % 400 == 0) ) {
		
		printf ("¡El agno es bisiesto!\n");
		
	} else {
		
		printf ("El agno no es bisiesto :( \n");
	}
	
	return 0;
	
}

