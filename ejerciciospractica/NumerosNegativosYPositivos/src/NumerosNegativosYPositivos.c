/*
 ============================================================================
 Name        : NumerosNegativosYPositivos.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//Escribir un programa que realice las siguientes acciones:

//- Solicite al usuario 10 números
//- Calcule cuántos son negativos y cuantos son positivos
//- Muestre por pantalla la cantidad de negativos y la cantidad de positivos

int main(void) {
	setbuf(stdout,NULL);

	int i;
	int num;
	int contPositivos;
	int contNegativos;

	contPositivos = 0;
	contNegativos = 0;

	for(i=0;i<10;i++)
	{
		printf("Ingrese un numero: \n");
		scanf("%d",&num);

		if(num > 0)
		{
			contPositivos++;
		}
		else
		{
			contNegativos++;
		}

	}

	printf("La cantidad de numeros positivos es %d",contPositivos);
	printf("La cantidad de numeros negativos es %d",contNegativos);

	return EXIT_SUCCESS;
}

