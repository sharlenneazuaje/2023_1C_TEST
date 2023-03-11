/*
 ============================================================================
 Name        : ProgramaOperaciones.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//pedir dos numeros e imprimir la suma, la resta, la multiplicacion, y la division
int main(void) {
	setbuf(stdout,NULL);

	int num1;
	int num2;
	int suma;
	int resta;
	int multiplicacion;
	int division;

	printf("Ingrese un numero:\n");
	scanf("%d",&num1);
	printf("Ingrese un numero:\n");
	scanf("%d",&num2);

	suma = num1 + num2;
	resta = num1 - num2;
	multiplicacion = num1 * num2;
	division = num1 / num2;

	printf("La suma es %d \n", suma);
	printf("La resta es %d \n", resta);
	printf("La multiplicacion es %d \n", multiplicacion);
	printf("La division es %d \n", division);


	return EXIT_SUCCESS;
}
