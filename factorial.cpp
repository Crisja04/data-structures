#include <iostream> // Programa para calcular el factorial de un numero entero 

int main (){
	
	using namespace std;
	
	int n =0, b =0, f=0; // declaracion de las variables
	 
	 
      cout << "Programa para buscar un factorial" << endl; // mensaje que se desplegara al iniciar el programa
	
	cout << "Introduzca el numero que quiere buscar su factorial" << endl; // solicitandole al usuario que ingrese el numero que quiere saber su factorial 
	cin >> n; // lectura del nuevo ingresado por el usuario 
	f = 1; // declaramos f es igual a uno en esta seccion para que al introducir el 0 nos de su factorial que es el uno 
	
	if (n<0) {
		cout << "No aceptamos numeros negativos" << endl;
	}
	 
	 else {
	 
	for ( b=1; b<=n; b++) { // inicio de la condicion for que nos dice b sera la variable que nos cuente el numero desde 1 hasta el valor del numero ingresado es decir 
	// entre el 5, d ira aumentando hasta que sea igual a cinco 1*5 = 5 * 2 =10 *3 = 30 * 4 = 120 hasta que llegue a su valor.
		
	 f = b * f;  //  aqui nos dice que  1*5=5 , f es la variable que almacenara el factorial, sera acumulador, 1*5=5 , 5*2=10, 10*3=30, 30*4= 120... 
	}
	
	cout << "El factorial del numero es igual a: " << f << endl; // mensaje que nos aparecera con el resultado 
	
}
	system ("pause");
	return 0; // finalizacion del programa 
	}
