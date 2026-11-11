/*
Una empresa de agua cobra un cargo fijo de 5 dolares mas el consumo por tramos,
los primeros 15 metros cubicos los cobra a 1 dolar, de 16 a 30 metros cubicos a 1.5 dolares 
y lo que pase de 30 metros cubicos a 2 dolares.
Escriba un programa que lea el consumo del mes en un rango de 0 a 1000 metros cubicos 
y muestre el desgloce por tramo y el total a pagar
*/

#include<stdio.h>
#include<conio.h>


int main(){

float Consumo = 0;
int cargoFijo = 5;
float totalPagar = 0;
float totalTramo = 0;	
char opc;

do{
		
	
	
		
	do{	
	printf("Ingrese el consumo que desee: \n");
	scanf("%f", &Consumo);	
	if(Consumo < 0){
		printf("Valor Incorrecto, no puede ingresar valores negativos \n");
	}
	if(Consumo > 1000){
		printf("Valor Incorrecto, no puede ingresar valores mayores a 1000 \n");
	}
	}while(Consumo < 0 || Consumo > 1000);

	
	if(Consumo > 0 && Consumo <= 15){
		totalTramo = Consumo * 1;
	}else if(Consumo >= 16 && Consumo <= 30){
		totalTramo = Consumo * 1.5;
	}else if(Consumo > 30 && Consumo <= 1000){
		totalTramo = Consumo * 2;
	}
	
	printf("Cargo fijo = 5$\n");
	printf("Cargo por consumo de : %.2f Metros cubicos \n", Consumo);
	printf("Total comsumo por tramo = %.2f $ \n", totalTramo);
	totalPagar = totalTramo + cargoFijo;
	printf("El total a pagar es : %.2f $ \n", totalPagar);
	
	printf("Desea Ejecutar de nuevo el programa? \n");
	printf("(S,s) para ejecutar \n");
	printf("(N,n) para salir \n");
	opc = getch();
}while(opc=='s' || opc=='S');
}