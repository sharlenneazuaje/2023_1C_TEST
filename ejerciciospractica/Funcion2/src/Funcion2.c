/*
 ============================================================================
 Name        : Funcion2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Crear una función que permita ingresar un numero al usuario y lo retorne.
//Crear una función que reciba el radio de un círculo y retorne su área.
//Utilizar las funciones de los puntos 1 y 2 para hacer un programa que
//calcule el área de un círculo cuyo radio es ingresado por el usuario.
//Documentar las funciones al estilo Doxygen.

float pedirNumero();
float calcularAreaCirculo(float radio);


int main(void) {
	setbuf(stdout,NULL);

	float auxiliar;
	float area;

	auxiliar = pedirNumero();
	area = calcularAreaCirculo(auxiliar);

	printf("El área del circulo es %2.f",area);

	return EXIT_SUCCESS;
}

/**
*\brief Solicita un número y lo retorna
*\param No recibe parámetros
*\return Número ingresado por el usuario
*
*/


float pedirNumero()
{
	float numero;

	printf("Ingrese un número: \n");
	scanf("%f",&numero);

	return numero;
}


/**
*\brief Recibe el radio de un circulo y retorna su área
*\param Radio corresponde al radio del circulo
*\return El área del círculo
*
*/

float calcularAreaCirculo(float radio)
{
	float resultado;
	resultado = 3.14 * radio * radio;
	return resultado;
}
