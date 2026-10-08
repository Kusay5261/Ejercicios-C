/*

Realiza un programa que permita ingresar por teclado 20 notas, calcule el promedio general y lo devuelva en pantalla

*/

#include<stdio.h>

int main(){
	float nota = 0;
	float promedio = 0;
	float sumatoria = 0;
		for(int i = 0; i < 20; i++){
			printf("Ingrese la nota N# %d \n", i+1);
			scanf("%f", & nota);
		
			while(nota<1 || nota>20){
				printf("Ingrese una nota valida \n");	
				scanf("%f", & nota);
			}
		
			sumatoria = sumatoria + nota;
		
		
		}
		
		promedio = sumatoria / 20;
		printf("El promedio general es igual a: %f", promedio);
}