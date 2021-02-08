#include <stdio.h>
#include <stdlib.h>
int suma (int, int);
int resta(int, int);
int multiplicacion(int, int);
int division(int, int);
int a, b, c, operacion, seguir = 1;

int main () {

	while (seguir == 1){
	printf("Calculadora\n");
	printf("Ingrese su primer numero y presione ENTER \n");
	scanf("%d",&a);
	
	printf("Ingrese su segundo numero y presione ENTER \n");
	scanf("%d",&b);
	
	printf("Escriba 1 para sumar, 2 para restar, 3 para multiplicar o 4 para dividir\n");
	scanf("%d", &operacion);
	
	switch (operacion) {
		case 1:
			c = suma (a, b);
			break;
		case 2:
			c = resta (a, b);
			break;
		case 3:
			c = multiplicacion (a, b);
			break;
		case 4:
			c = division (a, b);
			break;	
		default:
			printf("Introduzca un valor valido\n");
			break;	
		} 
	printf("El resultado es: %f \n", c);
	printf("1 para continuar , otro # para cerrar (Luego Enter)\n");
	scanf("%d", &seguir);
	} 
	system("pause");
	return 0;
}
int suma (int a, int b) {
	c = a + b;
	return c;
}
int resta (int a, int b) {
	c = a - b;
	return c;
}
int multiplicacion (int a, int b) {
	c = a * b;
	return c;
}
int division (int a, int b) {
	c = a / b;
	return c;
}


