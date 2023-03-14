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

	return EXIT_SUCCESS;
}
