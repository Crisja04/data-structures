#include <stdio.h>
#include <stdlib.h>
// Cristian Tavarez Matricula 20162192
main () {
	int matrizA[2][2], matrizB[2][2], matrizC[2][2];
	int i,e,k,op,sum;
	
	printf("Este programa efectua operaciones con matrices 2x2 \n");
	printf("Las matrices se introducen de izquierda a derecha y de arriba hacia abajo \n");
	printf("Ingrese la primera matriz \n");
	// Lectura primera matriz
	for (i = 0; i < 2; i++) {
		for (e = 0; e < 2; e++) {
			scanf("%d", &matrizA[i][e]);
		}
	}
	// Impresion primera matriz
	printf("Su matriz es \n");
	for (i = 0; i < 2; i++) {
		for (e = 0; e < 2; e++) {
			printf("%d ", matrizA[i][e]);
		}
		printf("\n");
	}
	printf("Ingrese la segunda matriz \n");
	// Lectura segunda matriz
	for (i = 0; i < 2; i++) {
		for (e = 0; e < 2; e++) {
			scanf("%d", &matrizB[i][e]);
		}
	}
	// Impresion segunda matriz
	printf("Su matriz es \n");
	for (i = 0; i < 2; i++) {
		for (e = 0; e < 2; e++) {
			printf("%d ", matrizB[i][e]);
		}
		printf("\n");
	}
	printf("Seleccione el tipo de operacion \n");
	printf("1-Suma \n");
	printf("2-Resta \n");
	printf("3-Multiplicacion \n");
	scanf("%d", &op);
	// Llama la operacion indicada 
	switch (op) {
		case 1: 
			for (i = 0; i < 2; i++){
				for (e = 0; e < 2; e++) {
					matrizC[i][e] = matrizA[i][e] + matrizB[i][e]; 
				}
			}
			break;
		case 2:
			for (i = 0; i < 2; i++){
				for (e = 0; e < 2; e++) {
					matrizC[i][e] = matrizA[i][e] - matrizB[i][e]; 
				}
			}
			break;
		case 3:
			for (i = 0; i < 2; i++) {
				for (e = 0; e < 2; e++) {
					sum = 0 ;
					for(k = 0 ; k < 2 ; k++) {  
          				sum = sum + matrizA[i][k] * matrizB[k][e];
          			}
          			matrizC[i][e]=sum;
				}
			}
			break;
		default:
			printf("Operacion invalida \n");
			break;
	}
	// Impresion del resultado
	printf("La matriz resultante es \n");
		printf("Su matriz es \n");
	for (i = 0; i < 2; i++) {
		for (e = 0; e < 2; e++) {
			printf("%d ", matrizC[i][e]);
		}
		printf("\n");
	}
	system("pause");
}
