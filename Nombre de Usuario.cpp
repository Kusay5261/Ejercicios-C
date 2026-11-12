/*

Realice un programa que permita mostrar en pantalla un mensaje de su eleccion dependiendo de las siguientes condiciones:
1) Que el nombre del usuario empiece por G,R o M y que su edad este entre 18 y 30 años.

2) Que el nombre de usuario empiece por T,Z o R y su edad este entre 31 y 40 años.

3) QUe el nombre del usuario empiece por X,Y o Z y que tenga mas de 60 años, si no se cumple ninguna condicion tambien añada un mensaje personalizado

*/

#include <stdio.h>
#include <string.h>
#include <ctype.h> // Necesario para toupper()

int main() {
    char nombre[50];
    int edad;
    char primeraLetra;

    // Solicito los datos al usuario
    printf("Ingrese su nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    
    // Limpiar el salto de línea '\n' que deja fgets al final si existe
    nombre[strcspn(nombre, "\n")] = 0;

	//Solicito la edad del usuario
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    // Obtengo la primera letra y la paso a mayusculas
    primeraLetra = toupper(nombre[0]);

    // Opciones
    if ((primeraLetra == 'G' || primeraLetra == 'R' || primeraLetra == 'M') && (edad >= 18 && edad <= 30)) {
        printf("\n Hola %s, tienes %d años. Tu nombre empieza con %c y estas en el rango de 18 a 30.\n", nombre, edad, primeraLetra);
    } 
    else if ((primeraLetra == 'T' || primeraLetra == 'Z' || primeraLetra == 'R') && (edad >= 31 && edad <= 40)) {
        printf("\n Saludos %s, con %d años. Perteneces al grupo de nombres con %c entre 31 y 40 años.\n", nombre, edad, primeraLetra);
    } 
    else if ((primeraLetra == 'X' || primeraLetra == 'Y' || primeraLetra == 'Z') && (edad > 60)) {
        printf("\n Estimado/a %s, a tus %d años, tu nombre empieza por %c y eres mayor de 60.\n", nombre, edad, primeraLetra);
    } 
    else {
        // Si no cumple ninguna condicion
        printf("\n Hola %s (edad: %d). No cumples con ninguna de las combinaciones especificas\n", nombre, edad);
    }

    return 0;
}