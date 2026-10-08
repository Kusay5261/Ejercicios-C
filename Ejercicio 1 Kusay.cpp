/*
escriba un programa que reciba por teclado las longitudes de los dos catetos de un triangulo rectangulo y calcule la lingitud de la hipotenusa dado el teorema de pitagoras

*/

#include<stdio.h>
#include<math.h>


int main () {
	double a = 0;
	double b = 0;
	double c = 0;
	
	printf("Ingrese la longitud de a \n");
	scanf("%lf", & a);
	printf("Ingrese la longitud de b \n");
	scanf("%lf", & b);
	
	c = sqrt(a * a + b * b);
	printf("El valor de la hipotenusa es: %f", c);
	
	return 0;}
