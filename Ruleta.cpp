#include <stdio.h>  // Librería estándar para entrada y salida (printf, scanf, getchar)
#include <stdlib.h> // Librería para control de procesos y generación de números aleatorios (rand, srand)
#include <time.h>   // Librería para manejar el tiempo del sistema (time)

int main() {
    // ----------------------------------------------------
    // DECLARACIÓN DE VARIABLES
    // ----------------------------------------------------
    int num_opciones = 0;   // Almacenará cuántas opciones tendrá la ruleta (3, 5 o 10)
    int spin_resultado = 0; // Almacenará el número aleatorio que representa el índice ganador

    // Declaramos cadenas de caracteres individuales (arreglos unidimensionales estáticos de 50 espacios)
    // para cada opción, evitando el uso de matrices o punteros complejos.
    char o1[50], o2[50], o3[50], o4[50], o5[50];
    char o6[50], o7[50], o8[50], o9[50], o10[50];

    // Inicializamos la semilla aleatoria usando la hora actual. 
    // Esto asegura que cada vez que corras el programa, el resultado de la ruleta sea distinto.
    srand(time(NULL));

    printf("========================================\n");
    printf("   SIMULADOR DE RULETA PERSONALIZADA    \n");
    printf("========================================\n\n");

    // ----------------------------------------------------
    // 1. VALIDACIÓN DEL NÚMERO DE OPCIONES (DO-WHILE)
    // ----------------------------------------------------
    do {
        printf("Cuantas opciones tendra la ruleta? (10, 5 o 3): ");
        
        // Intentamos leer un número entero ingresado por el usuario.
        // scanf devuelve 1 si la lectura fue exitosa.
        if (scanf("%d", &num_opciones) != 1) {
            printf("[ERROR] Entrada invalida. Por favor, ingrese un numero entero.\n");
            
            // Limpiamos el búfer de entrada (buffer) para eliminar caracteres basura 
            // o letras que el usuario haya escrito por error, evitando un bucle infinito.
            while (getchar() != '\n');
            
            num_opciones = 0; // Reiniciamos a 0 para forzar a que el ciclo se repita
        } 
        // Validamos que el número introducido sea exactamente una de las opciones permitidas
        else if (num_opciones != 10 && num_opciones != 5 && num_opciones != 3) {
            printf("[ERROR] Opcion no permitida. Solo puede elegir 10, 5 o 3.\n");
        }
    } while (num_opciones != 10 && num_opciones != 5 && num_opciones != 3); // Se repite si no es 10, 5 o 3

    // Limpiamos el salto de línea ('\n') que se queda en el búfer 
    // después de presionar "Enter" al ingresar el número de opciones.
    while (getchar() != '\n');

    // ----------------------------------------------------
    // 2. INGRESO MANUAL DE LAS OPCIONES POR EL USUARIO
    // ----------------------------------------------------
    printf("\n----------------------------------------\n");
    printf(" INGRESE LOS VALORES PARA CADA OPCION\n");
    printf(" (Pueden ser numeros, nombres, simbolos o palabras)\n");
    printf("----------------------------------------\n");

    // La opción 1 siempre se pide sin importar si la ruleta es de 3, 5 o 10.
    printf("Ingrese la opcion 1: ");
    scanf("%49s", o1); // Leemos la cadena y limitamos a 49 caracteres para prevenir desbordamientos (overflow)

    // Si el usuario eligió 3, 5 o 10 opciones, pedimos la 2 y la 3
    if (num_opciones >= 3) {
        printf("Ingrese la opcion 2: ");
        scanf("%49s", o2);
        printf("Ingrese la opcion 3: ");
        scanf("%49s", o3);
    }

    // Si el usuario eligió 5 o 10 opciones, pedimos la 4 y la 5
    if (num_opciones >= 5) {
        printf("Ingrese la opcion 4: ");
        scanf("%49s", o4);
        printf("Ingrese la opcion 5: ");
        scanf("%49s", o5);
    }

    // Si el usuario eligió exactamente 10 opciones, pedimos las restantes (de la 6 a la 10)
    if (num_opciones == 10) {
        printf("Ingrese la opcion 6: ");
        scanf("%49s", o6);
        printf("Ingrese la opcion 7: ");
        scanf("%49s", o7);
        printf("Ingrese la opcion 8: ");
        scanf("%49s", o8);
        printf("Ingrese la opcion 9: ");
        scanf("%49s", o9);
        printf("Ingrese la opcion 10: ");
        scanf("%49s", o10);
    }

    // ----------------------------------------------------
    // 3. MOSTRAR EL RESUMEN DE LAS OPCIONES CONFIGURADAS
    // ----------------------------------------------------
    printf("\n----------------------------------------\n");
    printf(" RESUMEN DE LAS OPCIONES EN LA RULETA:\n");
    printf("----------------------------------------\n");
    
    // Imprimimos en pantalla únicamente las opciones que el usuario configuró
    if (num_opciones >= 1) printf("1. %s\n", o1);
    if (num_opciones >= 3) {
        printf("2. %s\n", o2);
        printf("3. %s\n", o3);
    }
    if (num_opciones >= 5) {
        printf("4. %s\n", o4);
        printf("5. %s\n", o5);
    }
    if (num_opciones == 10) {
        printf("6. %s\n", o6);
        printf("7. %s\n", o7);
        printf("8. %s\n", o8);
        printf("9. %s\n", o9);
        printf("10. %s\n", o10);
    }

    // ----------------------------------------------------
    // 4. GIRAR LA RULETA (LÓGICA ALEATORIA)
    // ----------------------------------------------------
    printf("\nGirando la ruleta...\n");
    
    // Generamos un número aleatorio con 'rand()' y aplicamos módulo '%' con 'num_opciones'.
    // Si num_opciones es 3, rand() % 3 generará valores entre 0 y 2.
    // Si num_opciones es 5, generará entre 0 y 4.
    // Si num_opciones es 10, generará entre 0 y 9.
    spin_resultado = rand() % num_opciones;

    // ----------------------------------------------------
    // 5. MOSTRAR EL RESULTADO FINAL
    // ----------------------------------------------------
    printf("\n========================================\n");
    printf("          ¡EL RESULTADO ES!             \n");
    printf("========================================\n");

    // Evaluamos el número aleatorio obtenido y mostramos la variable de texto correspondiente
    if (spin_resultado == 0) {
        printf("               >>> %s <<<\n", o1);
    } else if (spin_resultado == 1) {
        printf("               >>> %s <<<\n", o2);
    } else if (spin_resultado == 2) {
        printf("               >>> %s <<<\n", o3);
    } else if (spin_resultado == 3) {
        printf("               >>> %s <<<\n", o4);
    } else if (spin_resultado == 4) {
        printf("               >>> %s <<<\n", o5);
    } else if (spin_resultado == 5) {
        printf("               >>> %s <<<\n", o6);
    } else if (spin_resultado == 6) {
        printf("               >>> %s <<<\n", o7);
    } else if (spin_resultado == 7) {
        printf("               >>> %s <<<\n", o8);
    } else if (spin_resultado == 8) {
        printf("               >>> %s <<<\n", o9);
    } else if (spin_resultado == 9) {
        printf("               >>> %s <<<\n", o10);
    }

    printf("========================================\n");

    return 0; // Indica que el programa terminó correctamente
}