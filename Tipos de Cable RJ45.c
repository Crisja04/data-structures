#include <stdio.h>
#include <stdlib.h>

main () {
	int seleccion;
	printf("Este programa da informacion sobre los conectores RJ45 \n");
	printf("Existen dos tipos de cables: Estandar y Cross Over \n");
	printf("Elija el tipo de cable: (1) Estandar y (2) Cross Over \n");
	scanf("%d", &seleccion);
	if (seleccion == 1) {
		printf("Cable Estandar \n");
		printf("Blanco Naranja \n");
		printf("Naranja \n");
		printf("Verde Blanco \n");
		printf("Azul \n");
		printf("Azul Blanco \n");
		printf("Verde \n");
		printf("Blanco Marron \n");
		printf("Marron \n");
	}
	if (seleccion == 2) {
		printf("Cable Cross Over \n");
		printf("Blanco Verde \n");
		printf("Verde \n");
		prinft("Blanco Naranja \n");
		printf("Azul \n");
		printf("Azul Blanco \n");
		printf("Naranja \n");
		printf("Blanco Marron \n");
		printf("Marron \n");
	}
	system("pause");
}
