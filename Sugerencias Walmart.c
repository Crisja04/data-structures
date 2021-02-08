#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Cristian Tavarez 20162192

main () {
	char sugerencia[150], nombre[50], caracter;
	char clasificacion[10],temporal[] = "Tecnica", temporal2[] = "Servicio";
	int cedula, i = 0, tipo, fecha[3], seguir = 1;
	
	printf("Walmart \n");
	printf("Departamento de Calidad \n");
	printf("Esta es la interfaz para recibir sugerencias \n");
	
	while (seguir = 1 ) {
	printf("Elija el tipo de sugerencia escribiendo el numero \n");
	printf("1-Tecnica \n");
	printf("2-Servicio \n");
	scanf("%d", &tipo);
	switch (tipo) {
		case 1: 
			strcpy(clasificacion, temporal);
			break;
		case 2:
			strcpy(clasificacion, temporal2);
			break;
	}
	printf("Ingrese su nombre \n");
	scanf("%s", nombre);

	printf("Ingrese su numero de cedula \n");
	scanf("%d", &cedula);
	
	printf("Ingrese la fecha \n ");
	printf("Ingrese el dia \n");
	scanf("%d", &fecha[0]);
	printf("Ingrese el numero del mes \n");
	scanf("%d", &fecha[1]);
	printf("Ingrese el año \n");
	scanf("%d", &fecha[2]);
	
	printf("Ingrese la sugerencia \n");
	scanf ("%[^\n]%*c", sugerencia);
	
	printf("----------------------------------------------------------- \n");
	printf("Resumen de la sugerencia \n");
	printf("Tipo de sugerencia: %s \n", clasificacion);
	printf("Cedula: %d \n", cedula);
	printf("Nombre del cliente: %s \n", nombre);
	printf("Fecha: Dia %d Mes %d Año %d \n", fecha[0], fecha[1], fecha[2]);
	printf("Sugerencia: \n %s", sugerencia);
	
	printf("Ingrese 1 para hacer otra sugerencia o 0 para salir \n");
	scanf("%d", &seguir);
	if (seguir != 1) { break;}
	}
	
}
