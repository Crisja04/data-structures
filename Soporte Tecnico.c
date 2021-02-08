// Cristian Tavarez Matricula 2016-2192
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

static const Max = 15;

int i = 0, Auxiliar = 0, Opcion = 0;
char Salida = 'F', Salir = 'F';

struct Empleados { // Modulo 1
	int Codigo;
	char Nombre[20];
	char Apellido[20];
	char Sexo[10];
	char Departamento[20];
}Empleado[15];


struct Clientes { // Modulo 1
	int Codigo_cliente;
	char Nombre[20];
	char Apellido[20];
	char Sexo[10];
}Cliente[15];

struct Soportes { // Modulo 2
	int NumeroT;
	int Codigo_cliente;
	char Descripcion[30];
	int Fecha;
	char Comentario[50];
} Soporte[15];

struct Suplidores{ // Modulo 2
	char Nombre[20];
	int Fecha;
}Suplidor[15];

struct Articulos {// Modulo 2
	char Nombre[20];
	int Precio;
	int Cantidad;
}Articulo[15];

void Busqueda(Auxiliar,Salida) { 	// Busqueda de codigo del cliente
	int i;
	while(Soporte[i].Codigo_cliente < 15 && Salida == 'F'){
		i = 0;
		if (Soporte[i].Codigo_cliente = Auxiliar) {
			Salida = 'V';
		}
		i++;
	}
		if (Salida == 'F') {
		printf("El cliente no existe");
	}
	else if (Salida == 'V') {
		printf("El cliente ya esta creado");
		printf("\nEl codigo del cliente es: %i ", Auxiliar);
		printf("\nEl nombre del cliente es: %s %s", Cliente[i].Nombre, Cliente[i].Apellido );
	}
}

void Menu(Opcion){
	switch (Opcion) {
		case 1:
			printf("\nEsta es la lista de clientes");
			for (i = 0;i < Max; i++) {
				printf("\n%i.Codigo: %i ",i+1,Cliente[i].Codigo_cliente);
				printf("\n%i.Nombre: %s ",i+1,Cliente[i].Nombre);
				printf("\n%i.Apellido: %s ",i+1,Cliente[i].Apellido);
				printf("\n%i.Sexo: %s ",i+1,Cliente[i].Sexo);
				printf("\n");
			}
			break;
		case 2: 
			printf("\nEsta es la lista de suplidores");
			for (i = 0; i < Max; i++) {
				printf("\n%i.Nombre: %s",i+1,Suplidor[i].Nombre);
				printf("\n%i.Fecha limite de pago: %i ",i+1,Suplidor[i].Fecha);
				printf("\n");
			}
			break;
		case 3:
			printf("\nEsta es la lista de Articulos ");
			for (i = 0; i < Max; i++) {
				printf("\n%i. Nombre: %s",i+1, Articulo[i].Nombre);
				printf("\n%i. Precio: %i",i+1, Articulo[i].Precio);
				printf("\n%i. Cantidad: %i",i+1,Articulo[i].Cantidad);
				printf("\n");
			}
			break;
		case 4:
			printf("\nEsta es la lista de Tickets(Facturas)");
			for (i = 0; i < Max; i++) {
				printf("\n%i.Numero del ticket: %i ", i+1,Soporte[i].NumeroT);
				printf("\n%i.Codigo del cliente: %i ", i+1,Soporte[i].Codigo_cliente);
				printf("\n%i.Fecha del ticket: %i ", i+1,Soporte[i].Fecha);
				printf("\n%i.Descripcion del ticket: %s ", i+1, Soporte[i].Descripcion);
				printf("\n%i.Comentario del ticket: %s ", i+1, Soporte[i].Comentario);
			}
			break;
		case 5:
			Salir = 'V';
			break;
	}
}

main () {
	// Creacion de datos iniciales para consulta
	Empleado[0] = {001,"Cristian","Tavarez","Masculino","Ventas"};
	Empleado[1] = {002,"Juan","Perez","Masculino","Compras"};
	Empleado[2] = {003,"Maria","Encarnacion","Femenino","Recursos_Humanos"};
	Empleado[3] = {004,"Pedro","Hernandez","Masculino","Ventas"};
	Empleado[4] = {005,"Juana","Gil","Femenino","Recursos_Humanos"};

	Cliente[0] = {100,"Julian","Perez","Masculino"};
	Cliente[1] = {101,"Juliana","Perez","Femenino"};
	Cliente[3] = {102,"Miguel","Diaz","Masculino"};
	Cliente[4] = {103,"Mariel","Valdez","Femenino"};
	
	Soporte[0] = {010,100,"Vacio",13042018,"Vacio"};
	Soporte[1] = {011,101,"Vacio",13052018,"Vacio"};
	Soporte[2] = {012,102,"Vacio",13062018,"Vacio"};
	Soporte[3] = {013,103,"Vacio",13072018,"Vacio"};
	Soporte[4] = {014,104,"Vacio",13082018,"Vacio"};
	
	Suplidor[0] = {"Azul", 13082018};
	Suplidor[1] = {"Verde", 13032018};
	Suplidor[2] = {"Rojo", 13052018};
	Suplidor[3] = {"Negro", 13112018};
	Suplidor[4] = {"Blanco", 13102018};
	
	Articulo[0] = {"Papas",100, 100};
	Articulo[1] = {"Chicles",5, 150};
	Articulo[2] = {"Celulares",1000, 160};	
	Articulo[3] = {"Frutas",15, 190};
	Articulo[4] = {"Agua",10, 200};	
	
	while (Salir == 'F' && 1 <= Opcion <=5 ) {
	fflush(stdin);
	printf("Elija una opcion");
	printf("\n1. Clientes");
	printf("\n2. Suplidores");
	printf("\n3. Articulos");
	printf("\n4. Facturacion");
	printf("\n5. Salir \n");
	scanf("%i ", &Opcion);
	
	Menu(Opcion);
	
	printf("Ingrese el codigo del cliente: ");
	scanf("%i", &Auxiliar);
	
	Busqueda(Auxiliar);
}
	
	getch();
	return 0;
}
