#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char cadena1[30];
    char cadena2[30];
	printf("Ingrese la palabra 1: ");
	scanf("%s", cadena1);
	printf("Ingrese el palabra 2: ");
	scanf("%s", cadena2);
	
	qsort(cadena1);
	qsort(cadena2);

	printf("Palabras Ordenadas: ");
    printf("\n");
	printf("Palabra 1: %s",cadena1);
    printf("\n");
	printf("Palabra 2: %s",cadena2);
    printf("\n");
	
	return 0;
}