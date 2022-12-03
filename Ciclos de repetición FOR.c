#include <stdio.h>
#include <conio.h>

int notas[3], i, total;
float promedio;

main(){
	
	printf("Ingrese las 3 notas del alumno/a: \n");
		for (i=0; i<3; i++){
			scanf("%d", &notas[i]);
			total+=notas[i];
		}
	promedio = total/3;
		if(promedio<6){
			printf("DESAPROBADO \n");
		} else if(promedio>=6){
			printf("APROBADO \n");
		}
	printf("Promedio final: %f", promedio);
	
	getch();
}
