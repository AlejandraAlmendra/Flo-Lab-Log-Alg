//  Ciclos de repetición: DO-WHILE
//  4) Para imprimir el ticket de un supermercado. Se leen el precio de cada producto y su cantidad. El usuario indica cuando finaliza la carga
//  (se debe preguntar cada vez "Desea ingresar otro producto? SI/NO")
//  Informar:
//         a) Subtotal a pagar por producto (precio * cantidad)
//         b) Precio del producto más caro y cuantas unidades compra el cliente de ese producto
//         c) Total de productos que retira el cliente
//         d) Total a pagar y promedio de precio por producto        
#include <stdio.h>
#include <conio.h>
/*
[[0][1]] [[0][1]] [[0][1]]
*/


int productos[1][3];
int i, j, precioMayor, productoPrecioMayor, precioSubProd, cantProductos, totalPagar;
char resp[2];

main(){
	i=0;
do{
	printf("%d\n",sizeof(productos));
	printf("Ingrese precio del producto: $");
	scanf("%d", &productos[i][0]);
	
		if(productos[i][0]> precioMayor){
			precioMayor=productos[i][0];
			productoPrecioMayor=i;
		}
	
	printf("Ingrese cantidad a comprar: ");
	scanf("%d", &productos[i][1]);
	
		cantProductos+=productos[i][1];
	
	printf("¿Desea ingresar otro producto? SI/NO \n");
	scanf("%s", &resp);
	i++;
}while((strcmp(resp, "SI")==0) || (strcmp(resp, "si")==0));

for(j = 0; productos[j][0]!=0 ; j++){
		printf("\nPrecio: %d \n", productos[j][0]);//muestra el precio
		printf("Cant: %d \n", productos[j][1]);  //muestra la cantidad
		precioSubProd= productos[j][0] * productos[j][1];
		totalPagar+=precioSubProd;
		printf("Subtotal a pagar por producto: %d\n", precioSubProd);
	}

printf("\n\n\nPrecio del producto mas caro: %d\nUnidades compradas: %d", precioMayor, productos[productoPrecioMayor][1]);
printf("\n\nTotal de productos a retirar: %d Unidades", cantProductos);
printf("\n\nTotal a pagar: %d", totalPagar);
printf("\n\nPrecio promedio por producto: %d", totalPagar/cantProductos);
getch();
}

