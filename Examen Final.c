// Cristian Tavarez
// Matricula 2016-2192

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *des;

main () {
	char cadena[50];
	char direccion[] = "C:\\examen\\Frases.txt";
	char salir = 'F';
	char salida[] = "FIN";
	int i,k,largo = 0;
	
	printf("\n Escriba una cadena o FIN para salir \n");
	scanf ("%[^\n]%*c", cadena);
	
	largo = strlen(cadena);
	printf("La cadena inversa es: \n");
	for (i = largo; i >= 0; i--){
		printf("%c",cadena[i]);
	}
	des = fopen(direccion,"at");
	
	fputs(cadena,des);
	fputs("\n",des);
	printf("\n Se guardo la cadena en el archivo \n");
	
	fclose(des);
	

	getch();
	return 0;
}
