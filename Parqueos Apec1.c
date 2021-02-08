#include <stdlib.h>
#include <stdio.h>
 // Cristian Tavarez Matricula 20162192
int main () {
	int capacidad[3] = {25, 40 , 35}, disponibles[3] = {25, 40 , 35}, vehiculos[3] = {0, 0, 0};
	int cantidad, aceptados, salir;
	salir = 1;
	while (salir == 1) {
	printf("Este programa maneja los parqueos disponibles en los parqueos \n ");
	printf("Ingrese la cantidad de vehiculos que entraran al parqueo \n");
	scanf("%d", &cantidad);
	if (cantidad <= disponibles[0] && disponibles[0] != 0) {
		disponibles [0] -= cantidad;
		vehiculos[0] += cantidad;
		
	} else if (cantidad > disponibles[0] && disponibles[0] != 0) {
		aceptados = disponibles[0];
		cantidad -= aceptados;
		disponibles[0] -= aceptados;
		vehiculos[0] += aceptados;
		
	} else if (cantidad != 0 && cantidad <= disponibles[1] && disponibles[1] != 0) {
		disponibles [1] -= cantidad;
		vehiculos[1] += cantidad;
		
	} else if (cantidad > disponibles[1] && disponibles[1] != 0) {
		aceptados = disponibles[1];
		cantidad -= aceptados;
		disponibles[1] -= aceptados;
		vehiculos[1] += aceptados;
		
	} else if (cantidad != 0 && cantidad <= disponibles[2] && disponibles[2] != 0) {
		disponibles [2] -= cantidad;
		vehiculos[2] += cantidad;
		
	} else if (cantidad > disponibles[2] && disponibles[2] != 0) {
		aceptados = disponibles[2];
		cantidad -= aceptados;
		disponibles[2] -= aceptados;
		vehiculos[2] += aceptados;
		
	} else {
		printf("Parqueo lleno \n");
	}
	printf("Disponibles Parqueo A: %d \n", disponibles[0]);
	printf("Vehiculos en Parqueo A: %d \n", vehiculos[0]);
	printf("Disponibles Parqueo B: %d \n", disponibles[1]);
	printf("Vehiculos en Parqueo B: %d \n", vehiculos[1]);
	printf("Disponibles Parqueo C: %d \n", disponibles[2]);
	printf("Vehiculos en Parqueo C: %d \n", vehiculos[2]);
	printf("Ingrese 1 para continuar, 0 para cerrar \n");
	scanf("%d", &salir);
	}
	system("pause")
}
	
	
