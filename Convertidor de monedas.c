#include <stdio.h>
#include <stdlib.h>
int moneda,salir,acceso;
int contador[6];
float cantidad, conversion;
float tasadolar = 48.63, tasaeuro = 60.35, tasadolarc = 39.32;
float tasafranco = 51.66, tasalibra = 68.90, tasayen = 2.24;

main () { 
	salir = 1;
	while (salir == 1) { // mantiene el programa abierto
	printf("Esta aplicacion convierte monedas \n");
	printf("La moneda de origen es pesos \n");
	printf("Elija la moneda de destino \n");
	printf("1-Dolar Estadounidense \n");
	printf("2-Euro \n");
	printf("3-Franco \n");
	printf("4-Dolar Canadiense \n");
	printf("5-Libra Esterlina \n");
	printf("6-Yen \n");
	scanf("%d", &moneda);
	printf("Ingrese la cantidad a convertir \n");
	scanf("%f", &cantidad);

	switch (moneda) { // Elije el tipo de operacion
		case 1:
			conversion = cantidad / tasadolar;
			contador[0] = contador[0] + 1;
			printf("%f pesos equivalen a %f Dolares Estadounidenses \n", cantidad, conversion);
			break;
		case 2:
			conversion = cantidad / tasaeuro;
			contador[1] = contador[1] + 1;
			printf("%f pesos equivalen a %f Euros \n", cantidad, conversion);
			break;
		case 3:
			conversion = cantidad / tasafranco;
			contador[2] = contador[2] + 1;
			printf("%f pesos equivalen a %f Francos \n", cantidad, conversion);
			break;
		case 4:
			conversion = cantidad / tasadolarc;
			contador[3] = contador[3] + 1;
			printf("%f pesos equivalen a %f Dolares Canadienses \n", cantidad, conversion);
			break;
		case 5:
			conversion = cantidad / tasalibra;
			contador[4] = contador[4] + 1;
			printf("%f pesos equivalen a %f Libras Esterlinas \n", cantidad, conversion);
			break;
		case 6:
			conversion = cantidad * tasayen;
			contador[5] = contador[5] + 1;
			printf("%f pesos equivalen a %f Yenes \n", cantidad, conversion);
			break;
		default:
			printf("Opcion no definida \n");
			break;
	}
	printf("Ver estadisticas presione 1, seguir presione 0 \n");
	scanf("%d", &acceso);
	if (acceso == 1) {
		printf("%d operaciones a Dolar estadounidense \n", contador[0]);
		printf("%d operaciones a Euro \n", contador[1]);
		printf("%d operaciones a Franco \n", contador[2]);
		printf("%d operaciones a Dolar Canadiense \n", contador[3]);
		printf("%d operaciones a Libras Esterlinas \n", contador[4]);
		printf("%d operaciones a Yenes \n", contador[5]);
	}
	printf("Para salir presione 0, para seguir presione 1 \n");
	scanf("%d", &salir);
	}
	system("pause");
}
