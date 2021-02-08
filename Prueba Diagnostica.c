#include <stdio.h>
#include <stdlib.h>

main () {
	int arreglo[5];
	int a, modificar;
	
	 printf("Leer elementos\n");
	for (a = 0; a <= 5; a++) {
		scanf("%d", &arreglo[a]);
	}
	printf("\nLista\n");
	for (a = 0; a <= 5; a++) {
		printf("%d ", arreglo[a]);	
	}
	printf("\nPosicion a modificar\n");
	scanf("%d",&modificar);
	scanf("%d", &arreglo[modificar-1]);
	
	printf("\nLista \n");
	for (a = 0; a <= 5; a++) {
		printf("%d ", arreglo[a]);	
	}
	
	printf("\nPosicion a eliminar\n");
	scanf("%d",&modificar);
	arreglo[modificar-1] = 0;
	
	printf("\nLista \n");
	for (a = 0; a <= 5; a++) {
		printf("%d ", arreglo[a]);	
	}
}
