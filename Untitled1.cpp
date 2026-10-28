/*

Realice un programa que solo reciba numeros y estos esten dentro del rango de 10.000 - 100.000, separelos en cifras significativas y muestre cada una en pantalla,
adicionalmente diga si es par o impar, si es primo y si un numero perfecto

*/

#include <stdio.h>



int main(){
	
	int Valor = 0;
	printf("Ingrese un nuemero entre 10.000 y 100.000 o entre 100.000 y 999.999\n");
	scanf("%d", &Valor); 
    if ((Valor > 9999 && Valor <= 99999) || (Valor > 99999 && Valor <= 999999)){
    	int cien_mil = Valor / 100000;
        int diez_mil = (Valor / 10000)% 10;        
        int millar    = (Valor / 1000) % 10;   
        int centena   = (Valor / 100) % 10;   
        int decena    = (Valor / 10) % 10;     
        int unidad    = Valor % 10;            

        //Resultados0
        printf("Cifras separadas:\n");
        printf("Centenas de millar: %d\n", cien_mil);
        printf("Decenas de millar: %d\n", diez_mil);
        printf("Millares:          %d\n", millar);
        printf("Centenas:          %d\n", centena);
        printf("Decenas:           %d\n", decena);
        printf("Unidades:          %d\n", unidad);
        
        
    }else{
    	printf("El numero ingresado es invalido!");
	}
    return 0;
}