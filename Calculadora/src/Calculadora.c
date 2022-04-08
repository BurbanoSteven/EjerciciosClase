/*
 ============================================================================
 Name        : Calculadora.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int getInt (int * pNumeroIngresado,char * mensaje,char * mensajeError,
		int maximo, int minimo, int maximoReintentos); //pongo firma

int main(void) {
	setbuf(stdout, NULL);

	int numeroUno;
	float retornoGetInt;

	//LLamo a mi función

	retornoGetInt = getInt(&numeroUno,"Ingrese un numero entero: \n","El numero es incorrecto \n", 10,1,2); //reemplazo por la variable del programa nuevo

	if (retornoGetInt == 0){

	printf ("%d", numeroUno); //si el cliente asigna un numero , se lo asigna al numeroUno.

	return 0;
}

//Hacemos una función

int getInt (int * pNumeroIngresado,char * mensaje,char * mensajeError,
		int maximo, int minimo, int maximoReintentos){ //getInt tomo un puntero tipo int, guardo un numero, pasaje por referencia

	int auxNumeroIngresado;
    int retorno;
    retorno = -1; //informar que esta mal el dato o algo salio mal, esto lo elijo por defecto

   /* printf("%s", mensaje); //%c es para un caracter %s para cadena de caracteres
	scanf("%d", &auxNumeroIngresado);
	while (auxNumeroIngresado < minimo || auxNumeroIngresado > maximo){
		printf("%s", mensajeError);
		printf("%s", mensaje);
			scanf("%d", &auxNumeroIngresado);
			maximoReintentos--; //contador a la inversa para que se salga en dos intentos
			if(maximoReintentos == 0){
				break; //cuando este en cero , sale como un bucle, el break rompe el bucle de interacion, corta el while
			}
		}
	*pNumeroIngresado = auxNumeroIngresado;
	retorno = 0;
	return retorno; */

    do {
    	printf("%s", mensaje);
    	scanf("%d", &auxNumeroIngresado);
    	maximoReintentos--;

    	if (auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo){
    		*pNumeroIngresado = auxNumeroIngresado;
    		retorno = 0;
    		break; // el break rompe el ciclo
    	}
    	else {
    		printf("%s", mensajeError );
    	}
    	if(maximoReintentos == 0){
    		break;
    	}

    }while (auxNumeroIngresado < minimo || auxNumeroIngresado > maximo);

    retorno = 0;

}
