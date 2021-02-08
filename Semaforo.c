// Cristian Tavarez Matricula 2016-2192
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

main () {
	int seguir = 1;
	printf("Este programa simula un semaforo \n");
	while (seguir == 1) {
	printf("Verde \n");
	Sleep(30000);
	system("cls");
	
	printf("Amarillo \n");
	Sleep(5000);
	system("cls");
	
	printf("Rojo \n");
	Sleep(25000);
	system("cls");
	}
	
	system("pause");
}
