/*
 ============================================================================
 Name        : Punteros.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"


//EJERCICIO: FUNCION DIVIDIR CON PUNTEROS

int main(void) {

	setbuf(stdout,NULL);

	int a;
	int b;
	float resultado;
	int respuesta;

	printf("Ingrese un numero: \n");
	scanf("%d",&a);

	printf("Ingrese un numero: \n");
	scanf("%d",&b);

	respuesta = dividir(a,b,&resultado);

	if(respuesta != 0)
	{
		printf("No se puede dividir por cero");
	}
	else
	{
		printf("El resultado es %f: ",resultado);
	}

}


