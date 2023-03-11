/*
 ============================================================================
 Name        : Promedio.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Pedirle al usuario 5 numeros e imprimir el promedio
int main(void) {
	setbuf(stdout,NULL);

	char i;
	int num;
	int acum;
	int cont;
	int prom;

	acum = 0;
	cont = 0;

	for(i=0;i<5;i++)
	{
		printf("Ingrese un numero: \n");
		scanf("%d",&num);
		acum += num;
		cont ++;
	}

	prom = acum / cont;

	printf("El promedio es %d",prom);




	return EXIT_SUCCESS;
}
