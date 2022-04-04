/*
 ============================================================================
 Name        : 2claseejercicio2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*Ejercicio 2-2:
Ingresar 10 números enteros, distintos de cero. Mostrar:Cantidad de pares e impares.
El menor número ingresado.De los pares el mayor número ingresado.
Suma de los positivos.Producto de los negativos.    */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int i;
	int numero;
	int cantidadDePares = 0;
	int cantidadDeImpares = 0;
	int menorNumero;
	int flagMenorNumero = 0;
	int mayorNumeroPar;
	int flagMayorNumeroPar = 0;
	int sumaPositivos = 0;
	int productoNegativos = 1;

	for(i=0; i < 10; i++){

		printf("Ingrese un nuevo numero");
		scanf("%d", &numero);

		if (numero%2 == 0){

			cantidadDePares++;
		}
		else {

			cantidadDeImpares++;
		}

		if(flagMenorNumero == 0 ){

			menorNumero = numero;
			flagMenorNumero = 1;
		}
		else if (menorNumero > numero){

			menorNumero = numero;

		}

		if(flagMayorNumeroPar == 0 && numero%2 == 0){

					mayorNumeroPar = numero;
					flagMayorNumeroPar = 1;
				}
				else if (mayorNumeroPar < numero){

					mayorNumeroPar = numero;

				}

		if (numero >= 0){

			sumaPositivos = numero + sumaPositivos;

		}
		else {

			productoNegativos = numero * productoNegativos;
		}




	}

	printf ("La cantidad de pares es: %d", cantidadDePares);
	printf ("\n la cantidad de impares es: %d", cantidadDeImpares);
	printf ("\n El menor numero es: %d", menorNumero);
	printf ("\n El mayor numero par es : %d", mayorNumeroPar);
	printf ("\n La Suma de los Positivos es: %d", sumaPositivos);
	printf ("\n El producto de los Negativos es: %d", productoNegativos);

	return 0;
}
