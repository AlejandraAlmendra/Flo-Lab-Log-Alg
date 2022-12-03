#include <stdio.h>
#include <conio.h>

int num;

main(){
	
	printf("Ingrese un numero entero: ");
	scanf("%d", &num);
	
	if(num>0){
		printf("\nEs un numero POSITIVO.");
	}else if(num<0){
		printf("\nEs un numero NEGATIVO.");
	}
	
	getch();
}

