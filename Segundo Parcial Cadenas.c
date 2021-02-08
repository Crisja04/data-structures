#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Cristian Tavarez 2016-2192
main () {
	char Nombre[50];
	int i = 0, j = 0, largo[4];
	const char fin = ' ';
	char *Pnombre, *Snombre, *Papellido, *Sapellido, *apuntador;
	printf("Ingrese su nombre completo\n");
	scanf("%s", Nombre);
	
	apuntador = strtok (Nombre,fin );
	strcpy(Pnombre, apuntador);
	
	apuntador = strtok (NULL, fin);
	strcpy(Snombre, apuntador);
	
	apuntador = strtok(NULL, fin);
	strcpy(Papellido, apuntador);
	
	apuntador = strtok(NULL, fin);
	strcpy(Sapellido, apuntador);
	
	printf("Primer Nombre: %s \n", Pnombre);
	printf("Segundo Nombre: %s \n", Snombre);
	printf("Primer Apellido: %s \n", Papellido);
	printf("Segundo Apellido: %s \n", Sapellido);
	
	Pnombre[0] = strupr(Pnombre);
	Snombre[0] = strupr(Snombre);
	Papellido[0] = strupr(Papellido);
	Sapellido[0] = strupr(Sapellido);
	
	printf("Primer Nombre: %s \n", Pnombre);
	printf("Segundo Nombre: %s \n", Snombre);
	printf("Primer Apellido: %s \n", Papellido);
	printf("Segundo Apellido: %s \n", Sapellido);
	
	largo[0] = strlen(Pnombre);
	largo[1] = strlen(Snombre);
	largo[2] = strlen(Papellido);
	largo[3] = strlen(Sapellido);
	printf("Formato Apellido, Nombre: %s %s, %s %s \n", Papellido, Sapellido, Pnombre, Snombre);
	printf("Primer Nombre: %s - %d \n",Pnombre, largo[0]);
	printf("Segundo Nombre: %s - %d \n",Snombre, largo[1]);
	printf("Primer Apellido: %s - %d \n", Papellido, largo[2]);
	printf("Segundo Apellido: %s - %d \n", Sapellido, largo[3]);
}
