#include <stdio.h>
#include <stdlib.h>
int selector,salir;
main(){
	salir = 1;
	while ( salir == 1) {
	printf("Aplicacion de caracteristicas de marcas \n");
	printf("Elija la marca que desea \n");
	printf("1-Nissan \n");
	printf("2-Toyota \n");
	printf("3-Isuzu \n");
	printf("4-Ford \n");
	printf("5-Mitsubishi \n");
	scanf("%d",&selector);
	
	switch (selector) {
		case 1:
			printf("Caracteristicas de Camioneta Nissan \n");
			printf("- Dimensiones: 205.5 Pulgadas de largo y 72.8 Pulgadas de ancho \n");
			printf("- Combustible: Gasolina \n");
			printf("- Capacidad de carga: 930 libras \n");
			printf("- Cilindraje: 2.5 litros \n");
			printf("- Dimensiones del motor: 60 pulgadas de largo y 30 pulgadas de ancho \n");
			break;
		case 2:
			printf("Caracteristicas de Camioneta Toyota \n");
			printf("- Dimensiones: 210 Pulgadas de largo y 75 Pulgadas de ancho \n");
			printf("- Combustible: Gasolina \n");
			printf("- Capacidad de carga: 900 libras \n");
			printf("- Cilindraje: 2.4 litros \n");
			printf("- Dimensiones del motor: 65 pulgadas de largo y 35 pulgadas de ancho \n");
			break;
		case 3:
			printf("Caracteristicas de Camioneta Isuzu \n");
			printf("- Dimensiones: 190 Pulgadas de largo y 70 Pulgadas de ancho \n");
			printf("- Combustible: Diesel \n");
			printf("- Capacidad de carga: 800 libras \n");
			printf("- Cilindraje: 2.3 litros \n");
			printf("- Dimensiones del motor: 55 pulgadas de largo y 25 pulgadas de ancho \n");
			break;
		case 4:
			printf("Caracteristicas de Camioneta Ford \n");
			printf("- Dimensiones:  Pulgadas de largo y 72.8 Pulgadas de ancho \n");
			printf("- Combustible: Gasolina \n");
			printf("- Capacidad de carga: 890 libras \n");
			printf("- Cilindraje: 2.2 litros \n");
			printf("- Dimensiones del motor: 61 pulgadas de largo y 34 pulgadas de ancho \n");
			break;	
		case 5:
			printf("Caracteristicas de Camioneta Mitsubishi \n");
			printf("- Dimensiones: 210 Pulgadas de largo y 75 Pulgadas de ancho \n");
			printf("- Combustible: Gasolina \n");
			printf("- Capacidad de carga: 970 libras \n");
			printf("- Cilindraje: 2.7 litros \n");
			printf("- Dimensiones del motor: 70 pulgadas de largo y 35 pulgadas de ancho \n");
			break;
		default:
			printf("Marca no encontrada \n");
	}
	printf("Para seguir presione 1, para cerrar 0 \n");
	scanf("%d", &salir);
	}
	system("pause");
}
