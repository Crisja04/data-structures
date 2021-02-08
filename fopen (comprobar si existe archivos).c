#include<stdio.h>
#include<stdlib.h>

FILE *fd1,*fd2;

int main()
{
	
	fd1 = fopen("C:\\prueba\\hello.txt", "a+");
	fd2 = fopen("C:\\prueba\\adios.txt","a+");
	
	if (fd1 ==NULL || fd2 ==NULL)
	{
		printf("No se ha podido comprobar los archivos");
	}
	else
	{
		printf("Se se pudieron comprobar los archivos");
	}
	
	fclose(fd1);
	fclose(fd2);	
	
	return 0;
}
