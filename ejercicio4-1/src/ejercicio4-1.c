/*
 ============================================================================
 Name        : UtnDatos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 *//*
 1. Se desea hacer un programa que permita manejar una caja con ingreso y egreso de dinero.
 Para ello se debe hacer un menú con las siguientes opciones:
--> Saldo actual: nn <--
1) Saldo inicial: permitirá la carga del saldo inicial
2) Ingresar dinero: deberá pedirle al usuario la cantidad e incrementar el saldo
3) Egreso de dinero: deberá pedirle al usuario la cantidad y decrementar el saldo
4) Cerrar caja: informará el saldo final y cerrará la aplicación luego de una confirmación

Notas:
- Usar la biblioteca UTN: funciones UTN_getInt y UTN_getFloat
- No se puede ingresar/extraer dinero si no se cargó saldo inicial
- No puedo extraer más de lo que tengo
- El saldo inicial sólo se puede cargar una vez
- Los importes se deben mostrar con dos decimales*/

#include <stdio.h>
#include <stdlib.h>
#include "bibliotecautn.h"



int main(void) {

	setbuf(stdout, NULL);

	float saldoInicial= 0;
	float saldo;

	float ingresarDinero = 0;
    float extraerDinero = 0;
	int validacionRetorno;
	int validacion;
	int opcionMenu;
	float acumuladorDinero = 0;




	do {




		printf("1)Saldo Inicial: \n");
		printf("2)Ingresar Dinero: \n");
		printf("3)Extraer Dinero: \n");
		printf("4)Cerrar Caja: \n ");




		validacionRetorno = UTN_getInt(&opcionMenu, "Elija la opcion que desea realizar \n", "opcion incorrecta",4 ,1,1);

		if(validacionRetorno == 0){



			switch(opcionMenu){

			case 1:
				validacion = UTN_getFloat(&saldoInicial, "Ingrese su base de dinero : \n", "opcion incorrecta", 100000,1,1);

				if(validacion == 0 && acumuladorDinero == 0){

                  saldo = saldoInicial;
					printf("Su saldo  es: %.2f \n", saldo);

					acumuladorDinero = saldo + acumuladorDinero ;
				}
				else{
					printf("No es posible ingresar base de dinero.\n");
				}
				break;

			case 2:
				validacion = UTN_getFloat(&ingresarDinero, "Ingrese el dinero a ingresar: \n", "opcion incorrecta", 100000,1,2);

					if(validacion == 0 ){


                          saldo = ingresarDinero + acumuladorDinero;

                          printf("Su saldo  es: %.2f", saldo);

                         acumuladorDinero = saldo;
								}


					else {
						 printf("Su saldo fue mal ingresado.\n");
					}


				break;

			case 3:
				validacion = UTN_getFloat(&extraerDinero, "Ingrese el dinero a retirar: \n", "opcion incorrecta", 100000,1,2);

					if(validacion == 0 ){

                         saldo = acumuladorDinero - extraerDinero;
						printf("Su saldo  es: %.2f", saldo );

						acumuladorDinero = saldo;

							}
					else{
						printf("Su saldo fue mal ingresado.\n");
							}


				break;

			case 4:


				printf("Hasta la proxima! \n  su saldo es: %.2f", acumuladorDinero);


				break;








			}
		}
	}while(opcionMenu != 4);





	return 0;
}


