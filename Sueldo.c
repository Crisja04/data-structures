#include <stdio.h>
#include <stdlib.h>

main () {
	char nombre[15];
	int sueldo, sueldoc, sueldobase[3] = {35000, 48000, 60000}, salir;
	float impuesto = 0.00,tasa[3] = {0.15, 0.20, 0.25}, impuestobase, sueldoneto, sfs, afp, total;
	salir = 1;
	while (salir == 1) {
	printf("Este programa calcula el impuesto mensual \n");
	printf("Introduzca su nombre \n");
	scanf("%s", &nombre);
	printf("Introduzca su sueldo \n");
	scanf("%d", &sueldo);
	sueldoc = sueldo;
	afp = sueldo * 0.0285;
	sfs = sueldo * 0.034;
		if (sueldo >= sueldobase[0]) {
			sueldoc -= sueldobase[0];
			impuesto = sueldoc * tasa[0];
			sueldoc += sueldobase[0];
		
				if (sueldo >= sueldobase[1]) {
					impuestobase = 13000 * tasa[0];
					sueldoc -= sueldobase[1];
					impuesto = impuestobase + sueldoc * tasa[1];
					sueldoc += sueldobase[1];
			
						if (sueldo >= sueldobase[2] ) {
							impuestobase = impuestobase + (12000 * tasa[1]);
							sueldoc -= sueldobase[2];
							impuesto = impuesto + impuestobase + sueldoc * tasa[2];
						}
				}
		}
	total = impuesto + afp + sfs;
	printf("El impuesto a pagar por un sueldo de %ld es de %f \n", sueldo, impuesto);
	printf("El monto a pagar por sfs es de: %f \n", sfs);
	printf("El monto a pagar por afp es de: %f \n", afp);
	printf("El monto total a pagar es de: %f \n", total);
	printf("Si desea calcular denuevo presione 1, si desea salir presione 0 \n");
	scanf("%d", &salir);
	}	
	
	
	
}
