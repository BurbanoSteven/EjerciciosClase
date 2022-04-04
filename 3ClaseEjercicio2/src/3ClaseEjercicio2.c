/*
 ============================================================================
 Name        : 3ClaseEjercicio2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*
 ============================================================================
 Name        : 3ClaseEjercicioA.c
 Author      : StevenBurbano
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 a-Funciones
- Limpie la pantalla
- Asigne a la variable numero1 un valor solicitado al usuario
- Valide el mismo entre 10 y 100
- Realice un descuento del 5% a dicho valor a través de una función llamada realizarDescuento()
- Muestre el resultado por pantalla   */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	float calcularDescuento (float numero2);

	int numero1;
	float ValorConDescuento;



	   printf("Ingrese un numero: ");
	   scanf("%d", &numero1);

	   while (numero1 <= 10 || numero1 >= 100){
		   printf("Valor incorrecto por favor Ingrese un numero: ");
		   	   scanf("%d", &numero1);

	   }
	   ValorConDescuento = calcularDescuento (numero1);


   printf("el Valor con descuento es : %f", ValorConDescuento);
	return 0;
}

float calcularDescuento (float numero2){

	float descuento1;
	descuento1 = (numero2 * -0.05) + numero2;
	return descuento1;
}
