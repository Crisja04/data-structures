#include <stdio.h>
#include <stdlib.h>
// Cristian Tavarez Matricula 20162192
main () {
	int intervalo, inicio, tope;
	
	printf("Este programa genera una recta numerica personalizada \n");
	printf("Ingrese el intervalo \n");
	scanf("%d", &intervalo);
	printf("Ingrese el tope \n");
	scanf("%d", &tope);
	
	for (inicio = tope - (tope * 2); inicio <= tope; inicio += intervalo) {
		printf("%d " , inicio);
	}
	
}
