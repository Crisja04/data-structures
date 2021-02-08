#include<stdio.h>
#include<stdlib.h>

FILE *fd;  // file description 

int main()
{

char direccion[] = "C:\\prueba\\adios\\hola.txt";

fd = fopen(direccion,"w");

if (fd==NULL)

{
printf("No se puede crear el archivo");
}

else
{
 printf("Se creo el archivo");
 printf("\n\n Ubicacion: %s", direccion);	
}

return 0;
}
