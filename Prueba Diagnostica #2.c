#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main () {
	char arreglo[5][5], caracter;
	int a, modificar, max;
	
	printf("Leer elementos\n");
	while (max <= 5) {
		while (a <= 5) {
			caracter = getchar();
			arreglo[max][a]= caracter;
			a++;
			scanf("%c", &arreglo[max][a]);
			}
	}
	 printf("\nLista\n");
	while (max <= 5) {
		while (a <= 5) {
			printf("%s", arreglo[max][a]);
		}
	}
	/* printf("\nPosicion a modificar\n");
	scanf("%d",&modificar);
	scanf("%c", &arreglo[modificar-1]);
	
	printf("\nLista \n");
	for (a = 0; a <= 5; a++) {
		printf("%c ", arreglo[a]);	
	}
	
	printf("\nPosicion a eliminar\n");
	scanf("%d",&modificar);
	arreglo[modificar-1] = 0;
	
	printf("\nLista \n");
	for (a = 0; a <= 5; a++) {
		printf("%c ", arreglo[a]);	
	} */
}                                                                                                                                                            
