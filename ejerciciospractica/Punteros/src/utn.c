/*
 * utn.c
 *
 *  Created on: 10 mar 2023
 *      Author: sharl
 */

#include <stdio.h>
#include <stdlib.h>

int dividir(int operador1,int operador2,float* direccionDeVariableDeRetorno)
{
	float resultado;
	int retorno = -1;

	if(direccionDeVariableDeRetorno != NULL && operador2 != 0)
	{
		resultado = (float)operador1/operador2;
		(*direccionDeVariableDeRetorno) = resultado;
		retorno = 0;
	}

	return retorno;
}

