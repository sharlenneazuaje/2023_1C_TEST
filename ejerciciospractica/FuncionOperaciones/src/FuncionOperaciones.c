/*
 ============================================================================
 Name        : Funciones2(Sumar,Restar,Multiplicar,Dividir).c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//EJERCICIO
//Realizar un programa que pida un numero al usuario
//Después que pida una operación (+ , - , * , /)
//Después que pida otro número
//Segun la operación ingresada, se llamará a una función que ejecute la operación
//(Sumar) (Restar) (Multiplicar) (Dividir)
//Y luego mostrar al usuario el resultado. (EL MOSTRAR RESULTADO NO PUEDE ESTAR DENTRO DE LAS FUNCIONES)
//DEBEMOS CAPTURAR EL VALOR Y LUEGO LO IMPRIMIMOS POR FUERA.
//La función dividir: validar no dividir por 0.

#include <stdio.h>
#include <stdlib.h>

int sumar(int operador1, int operador2);
int restar(int operador1, int operador2);
int multiplicar(int operador1, int operador2);
float dividir(int operador1, int operador2);

int main(void) {
	setbuf(stdout,NULL);

	int num1;
	int num2;
	char operacion;
	int resultadoInt;
	float resultadoFloat;

	printf("Ingrese un numero:\n");
	scanf("%d",&num1);

	printf("Ingrese una operación: [+,-,*,/] \n");
	fflush(stdin);
	scanf("%c",&operacion);

	printf("Ingrese otro número: \n ");
	fflush(stdin);
	scanf("%d",&num2);

	switch(operacion)
	{
		case '+':
			resultadoInt = sumar(num1,num2);
			break;
		case '-':
			resultadoInt = restar(num1,num2);
			break;
		case '*':
			resultadoInt = multiplicar(num1,num2);
			break;
		case '/':
			resultadoFloat = dividir(num1,num2);
			break;
	}

	if(operacion != '/')
	{
		printf("El resultado es %d", resultadoInt);
	}
	else
	{
		printf("El resultado es %f", resultadoFloat);
	}

	return EXIT_SUCCESS;
}


int sumar(int operador1, int operador2)
{
	int resultado;
	resultado = operador1 + operador2;
	return resultado;
}

int restar(int operador1, int operador2)
{
	int resultado;
	resultado = operador1 - operador2;
	return resultado;
}

int multiplicar(int operador1, int operador2)
{
	int resultado;
	resultado = operador1 * operador2;
	return resultado;
}

float dividir(int operador1, int operador2)
{
	float resultado;

	if(operador2 != 0)
	{
		resultado = (float)operador1/operador2;
	}
	else
	{
		printf("Error div por 0 \n");
	}
	return resultado;
}

