#include <stdio.h>
#include <conio.h>

float precio, iva;

main(){
	
	printf("Ingrese el precio del producto:  ");
	scanf("%f", &precio);
	iva = precio*0.21f;
	printf("Iva: %f \n\n", iva);
	printf("Precio Total: %f", precio+iva);
	
	getch();
}

