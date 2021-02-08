#include <stdio.h>
#include <stdlib.h>
// Cristian Tavarez Matricula 20162192
main () {
	int decimal, resultado[100], i = 0, tope = 0;
	printf("Introduzca numero decimal \n");
	scanf("%d", &decimal);
	
	while (decimal > 0) {
		resultado[i] = decimal % 2; 
		decimal = decimal / 2;
		i++;
	}
	printf("En binario equivale a: ");
	for (tope = i - 1; tope >= 0; tope--) {
		printf("%d ", resultado[tope]);
	}
	system("pause");
}
