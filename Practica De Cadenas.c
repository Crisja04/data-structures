#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Cristian Tavarez Matricula 20162192
main () {
	char cadena[50], caracter;
	int i, largo = 0;
	printf("Este programa lee una cadena de maximo 50 caracteres \n");

	while (i <= 50 && caracter != '\n') {
		caracter = getchar();
		cadena[i] = caracter;
		i++;
		largo = strlen(cadena);
		if (largo == 50) {
			printf("No se aceptan mas caracteres \n");
		}
	}
		cadena[i] = '\0';
		printf("Su cadena es: %s \n", cadena);
		printf("Su largo es: %d \n", largo);
}
