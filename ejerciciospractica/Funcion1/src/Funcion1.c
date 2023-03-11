/*
 ============================================================================
 Name        : Funcion1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//Realizar una programa que solicite dos numeros al usuario y los sume
//a través de una funcion, en donde la suma no deberá pasar de 100

#include <stdio.h>
#include <stdlib.h>

int SumarConLimite(int operador1, int operador2);

int main(void) {
	setbuf(stdout,NULL);

	int num1;
	int num2;
	int suma;

	printf("Ingrese un numero");
	scanf("%d",&num1);

	printf("Ingrese otro numero");
	scanf("%d",&num2);

	suma = SumarConLimite(num1,num2);

	printf("La suma es: %d",suma);

	return EXIT_SUCCESS;
}

int SumarConLimite(int operador1, int operador2)
{
	int resultado;

	resultado = operador1 + operador2;

	if(resultado > 100)
	{
		resultado = 100;
	}

	return resultado;
}
