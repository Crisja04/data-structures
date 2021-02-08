#include<iostream>
#include<stdlib.h>

using namespace std;

int main ()
{
	int col[20];
	int fil[20];
	int i=0;
	int p=0;
	int f=0;
	int c=0;
	int total=0 ;
	
	cout << " Introduce tu numero de filas " << endl ;
	cin >> f ;

	cout << " Introduce tu numero de columnas " << endl ;
	cin >> c ;
	
	while (f>i)
	{
		
		cout << " Escribe tu columna " << i+1 <<  endl ;
		cin >> col[i]; 
		cout << " Escribe tu fila " << p+1 << endl ;
		cin >> col[i];
		i++;
		
	}
	system("pause") ;
	return 0 ;
}
	
	

