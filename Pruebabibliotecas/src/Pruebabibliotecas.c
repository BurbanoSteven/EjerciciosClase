/*
 ============================================================================
 Name        : Pruebabibliotecas.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "BibliotecaEjemplo.h"


int main(void) {
	setbuf(stdout, NULL);

	int primerNumero;
	int segundoNumero;
	int resultado;

	printf("Ingrese un Numero: \n");
				scanf("%d", &primerNumero);

	printf("Ingrese otro  Numero: \n");
				scanf("%d", &segundoNumero);

		resultado = suma(primerNumero, segundoNumero);


 printf("el resultado es : %d", resultado);




}



