// Nomtres y Apellidos  : Luis Efrain Frias Santana
// Matricula            : 2016-1862


#include<stdio.h>
#include<stdlib.h>

FILE *da; //da= Descriptor de Archivo

struct datosEmpleados{
	
	char nombre[30];
	char apellidos[30];
	char sexo[15];
	char codigo[30];
	char departamento[30];	
	
}datos;

void registrar(){
	char direccion[] = "C:\\practica\\reporte de clientes y empleados.txt";
	char ae;
	da = fopen(direccion,"wt");
	
	if(da == NULL){
		printf("No es posible crear el Reporte");
		return 1;
	}
	
	printf("\n\t.: Regittro de Clientes y Empleados\n");
	fprintf(da,"\n\t.: Registro de Clientes y Empleados\n");
	
	do{
		fflush(stdin);
		printf("\nIngrese su nombre: ");gets(datos.nombre);
		printf("\nIngrese sus apellidos: ");gets(datos.apellidos);
		printf("\nIngrese su sexo: ");gets(datos.sexo);
		printf("\nIngrese su codigo: ");gets(datos.codigo);
		printf("\nIngrese su departamento: ");gets(datos.departamento);
		
		fprintf(da,"\n\nNombre: ");
		fwrite(datos.nombre,1,strlen(datos.nombre),da);
		fprintf(da,"\nApellidos: ");
		fwrite(datos.apellidos,1,strlen(datos.apellidos),da);
		fprintf(da,"\nSexo: ");
		fwrite(datos.sexo,1,strlen(datos.sexo),da);
		fprintf(da,"\nCodigo: ");
		fwrite(datos.codigo,1,strlen(datos.codigo),da);
		fprintf(da,"\nDepartamento: ");
		fwrite(datos.departamento,1,strlen(datos.departamento),da);
		printf("Si desea registar otro empleado presione (t): ");
		scanf("%c",&ae);		
	}while(ae == 't');
}

void agregar(){
	char direccion[] = "C:\\practica\\reporte de clientes y empleados.txt";
	char ae;
	da = fopen(direccion,"at"); 
	
	if(da == NULL){
		printf("No es posible leer el Reporte");
		return 1;
	}
	printf("\n\t.:Agregando mas clientes:.\n");
	
	do{
		fflush(stdin);
		printf("\nIngrese su nombre: ");gets(datos.nombre);
		printf("\nIngrese sus apellidos: ");gets(datos.apellidos);
		printf("\nIngrese su sexo: ");gets(datos.sexo);
		printf("\nIngrese su codigo: ");gets(datos.codigo);
		printf("\nIngrese su departamento: ");gets(datos.departamento);
		
		fprintf(da,"\n\nNombre: ");
		fwrite(datos.nombre,1,strlen(datos.nombre),da);
		fprintf(da,"\nApellidos: ");
		fwrite(datos.apellidos,1,strlen(datos.apellidos),da);
		fprintf(da,"\nSexo: ");
		fwrite(datos.sexo,1,strlen(datos.sexo),da);
		fprintf(da,"\nCodigo: ");
		fwrite(datos.codigo,1,strlen(datos.codigo),da);
		fprintf(da,"\nDepartamento: ");
		fwrite(datos.departamento,1,strlen(datos.departamento),da);
		printf("\nSi desea agregar otro empleado presione (t): ");
		scanf("%c",&ae);
	}while(ae == 't');	
}

void ver(){
	int p;
	char direccion[] = "C:\\practica\\reporte de clientes y empleados.txt";
	
	da = fopen(direccion,"r");
	
	if(da == NULL){
		printf("No es posible leer el Reporte");
		return 1;
	}
	
	printf("\n\t.:Ver Registros:.\n\n");
	
	while((p=fgetc(da))!=EOF){
		if(p == '\n'){
			printf("\n");
		}
		else{
			putchar(p);
		}
	}
	printf("\n\n");
}

int main(){
	int selec;
	
	do{
		printf("\n\t.:Control de Empleados:.");
		printf("\n\n1. Registrar");
		printf("\n2. Agregar Empleado");
		printf("\n3. Ver Empleados Registrados");
		printf("\n4. Salir");
		printf("\n   Seleccionar: ");
		scanf("%i",&selec);
		
		switch(selec){
			case 1: registrar();break;
			case 2: agregar();break;
			case 3: ver();break;
		}
		
	}while(selec != 4);
	
	return 0;
}
