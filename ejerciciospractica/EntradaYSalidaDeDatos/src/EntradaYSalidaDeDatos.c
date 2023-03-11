/*
 ============================================================================
 Name        : holamundo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MENSAJE "hola mundo"

int main(void) {
	setbuf(stdout,NULL);

	int numero;

	printf("Ingrese un numero:");
	scanf("%d",&numero);

	printf("Ingresaste: %d", numero);

	return EXIT_SUCCESS;
}
