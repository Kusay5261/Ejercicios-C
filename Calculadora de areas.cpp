#include<stdio.h>
#include<math.h>

int main() {
	
	printf("Que desea calcular \n\n");
	printf("1. Area de un Cuadrado \n");
	printf("2. Area de un Rectangulo \n");
	printf("3. Area de un Triangulo Equilatero \n");
	printf("4. Area de un Circulo \n\n");
	printf("Ingrese su opcion \n");
	
	int opcion = 0;
	float Lado = 0;
	float Area = 0;
	float Base = 0;
	float Altura = 0;
	float Radio = 0;
	float Pi = 3.1415;
	scanf("%d", &opcion);
	
	switch(opcion){
		case 1:
			printf("Ingreso: Area de un Cuadrado \n\n");
			printf("Ingrese cuanto mide el lado del cuadrado \n");
			scanf("%f", &Lado);
			Area = Lado * Lado;
			printf("El Area del Cuadrado es: %.2f", Area);
			break;
		
		case 2:
			printf("Ingreso: Area de un Rectangulo \n\n");
			printf("Necesita la Base y Altura del Rectangulo \n\n");
			printf("Ingrese la Base del Rectangulo \n");
			scanf("%f", &Base);
			printf("Ingrese la Altura del Rectangulo \n");
			scanf("%f", &Altura);
			Area = Base * Altura;
			printf("El Area del Rectangulo es: %.2f", Area);
			break;
		
		case 3:
			printf("Ingreso: Area de un Triangulo Equilatero \n\n");
			printf("Necesita la Base y Altura del Triangulo \n\n");
			printf("Ingrese la Base del Rectangulo \n");
			scanf("%f", &Base);
			printf("Ingrese la Altura del Rectangulo \n");
			scanf("%f", &Altura);
			Area = (Base * Altura) / 2;
			printf("El Area del Triangulo Equilatero es: %.2f", Area);
			break;
			
		case 4:
			printf("Ingreso: Area de un Circulo \n\n");
			printf("Necesita el Radio del Circulo \n\n");
			printf("Ingrese el Radio del Circulo \n");
			scanf("%f", &Radio);
			Area = Pi * (pow(Radio, 2));
			printf("El Area del Circulo es: %.2f", Area);
			break;
	}
}