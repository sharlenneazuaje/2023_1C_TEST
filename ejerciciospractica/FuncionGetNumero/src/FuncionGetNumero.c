/*
 ============================================================================
 Name        : FuncionGetNumero.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void) {

	setbuf(stdout,NULL);

	char letra;
	int edad;
	float peso;
	int respuesta;

	respuesta = utn_getCaracter(&letra, "\nLetra?", "Error, la letra debe ser desde A a J\n", 'A', 'J',1);

	if(respuesta == 0)
	{
		printf("\nLa letra es: %c", letra);
	}
	else
	{
		printf("\nERROR");
	}


	respuesta = utn_getNumero(&edad, "\nNumero?", "Error, el numero debe ser de 0 a 199\n",0,199,2);

	if(respuesta == 0)
	{
		printf("La edad es: %d",edad);
	}
	else
	{
		printf("\nERROR");
	}

	respuesta = utn_getNumeroFlotante(&peso, "\nPeso?", "Error, el peso debe ser de 1.5 a 5.5\n", 1.5,5.5,3);

	if(respuesta == 0)
	{
		printf("El peso es: %f",peso);
	}
	else
	{
		printf("\nERROR");
	}


	return EXIT_SUCCESS;
}
