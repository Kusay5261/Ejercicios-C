/*


Escriba un programa que reciba por teclado un numero entero entre 1 y 7 y devuelva el dia de la semana correspondiente


*/

#include<stdio.h>

int main () {
	
	int numero = 0;
	
	printf("Ingrese un numero entre 1 y 7 \n");
	scanf("%d", &numero);
	
	switch(numero){
		case 1:
		printf("El dia de la semana correspondiente al numero 1 es: Lunes");
		break;
		
		case 2:
		printf("El dia de la semana correspondiente al numero 2 es: Martes");
		break;
		
		case 3:
		printf("El dia de la semana correspondiente al numero 3 es: Miercoles");
		break;
		
		case 4:
		printf("El dia de la semana correspondiente al numero 4 es: Jueves");
		break;
		
		case 5:
		printf("El dia de la semana correspondiente al numero 5 es: Viernes");
		break;
		
		case 6:
		printf("El dia de la semana correspondiente al numero 6 es: Sabado");
		break;
		
		case 7:
		printf("El dia de la semana correspondiente al numero 7 es: Domingo");
		break;
		
		default:
			printf("Numero invalido \n recuerde ingresar un numero entre 1 y 7");
			break;
	}
}