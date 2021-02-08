#include<iostream>
using namespace std;

int main ()
{
	int op;
	float n1;
	float n2;
	float x;
	int repetir;
	
	do { // obliga a poner un valor valido en op
		cout << "Introduzca un numero dependiendo de su operacion \n1-Suma \n2-Resta \n3-Multiplicacion \n4-Division\n";
		cin >> op;
	} while op < 4 or op > 1; 
	cout << "Introduzca un numero ";
	cin >> n;
	cout << "Introduzca un numero ";
	cin >> n2;
	switch (op) {
		case 1:
			x = n1 + n2;
			cout << "El resultado de su suma es " << x;
			break;
		case 2:
			x = n1 - n2;
			cout << "El resultado de su resta es " << x;
			break;
		case 3:
			x = n1 * n2;
			cout << "El resultado de su multiplicacion es " << x;
			break;
		case 4: 
			x = n1 / n2;
			cout << "El resultado de su division es " << x;
			break;
		default :
			cout << "Ingrese un numero de operacion adecuado \n";
			main();
	}
		while (true) 
		{
			cout << "Desea efectuar otra operacion? \n 1-Si \n 2-No \n";
		    cin >> repetir;
			if (repetir == 1)
			{
				main();
				break;
			}
			else 
			{
				return 0;
				break;
			}
		}
	system ("pause") // Esto te deja la ventana abierta aunque finalice todo para poder ver que paso
}
