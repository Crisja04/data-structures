// Cristian Tavarez Matricula 2016-2192

#include <stdio.h>
#include <stdlib.h>

main () {
	unsigned int numeros[6];
	int seleccion, posicion, auxiliar;
	seleccion = 1;
	while (seleccion == 1) {
	printf("Este programa genera una jugada de 6 numeros del loto \n");
	printf("Para generar jugada presione 1 y para salir 0\n");
	scanf("%d", &seleccion);
	if (seleccion == 1) {
	for (posicion = 0; posicion < 6; posicion++) {
		auxiliar = rand();
		numeros[posicion] = (auxiliar % 38) + 1;
	}
	for (posicion = 0; posicion < 6; posicion++){
		printf("%u ", numeros[posicion]);
	}
	}
	}
	system("pause");
	
}
