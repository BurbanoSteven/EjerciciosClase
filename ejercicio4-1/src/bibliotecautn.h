/*
 * bibliotecautn.h
 *
 *  Created on: 7 abr 2022
 *      Author: 54112
 */

#ifndef BIBLIOTECAUTN_H_
#define BIBLIOTECAUTN_H_



int UTN_getInt(int * pNumeroIngresado,char * mensaje,char * mensajeError,
		int maximo, int minimo, int maximoDeReintentos);

float UTN_getFloat(float * pNumeroIngresado,char * mensaje,char * mensajeError,
		float maximo, float minimo, int maximoDeReintentos);

#endif /* BIBLIOTECAUTN_H_ */
