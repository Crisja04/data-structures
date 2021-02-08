#include <stdlib.h>
#include <stdio.h>
// Cristian Tavarez Matricula 20162192
main () {
	int numero,i = 0,tope = 0, residuo = 0;
	char resultado[50];
	printf("Ingrese un numero decimal \n");
	scanf("%d", &numero);
	
	while (numero != 0) {
		residuo = numero % 16;
		
		if (residuo < 10) {
			resultado[i++] = residuo + 48; }
		else {
			resultado[i++] = residuo + 55;
		}
		numero = numero / 16;
	}
	printf("En hexadecimal equivale a: ");
	for (tope = i ; tope >= 0; tope--) {
		printf("%c ", resultado[tope]);
	}
	
}
