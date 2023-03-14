/*
 * utn.c
 *
 *  Created on: 13 mar 2023
 *      Author: sharl
 */

#include <stdio.h>
#include <stdlib.h>

/**
*\brief Solicita un número entero al usuario y devuelve un resultado
*\param mensaje Es el mensaje a ser mostrado
*\param pResultado Es la dirección de memoria en donde guardamos el valor obtenido
*\param mensajeError Es el mensaje a ser mostrado en caso de que el usuario no ingrese el número correcto
*\param minimo Es el número mínimo que el usuario puede ingresar
*\param maximo Es el número máximo que el usuario puede ingresar
*\param retintentos Es el número de reintentos que el usuario tiene para ingresar el número correcto
*\return Un resultado que nos indica si la función se ejecutó correctamente
*
*
*/

int utn_getNumero(int* pResultado, char* mensaje , char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1; //mi variable de retorno que me dice si hubo error o no
	int bufferInt; //acá guardamos nuestro resultado en caso de saber si es el correcto


	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0) //validar si los punteros son distintos de NULL y los demás parámetros
	{
		do
		{
			printf("%s", mensaje);
			scanf("%d",&bufferInt);

			if(bufferInt >= minimo && bufferInt <= maximo)
			{
				*pResultado = bufferInt;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while (reintentos >= 0);
	}

	return retorno;
}


/**
*\brief Solicita un número flotante al usuario y devuelve un resultado
*\param mensaje Es el mensaje a ser mostrado
*\param pResultado Es la dirección de memoria en donde guardamos el valor obtenido
*\param mensajeError Es el mensaje a ser mostrado en caso de que el usuario no ingrese el número correcto
*\param minimo Es el número mínimo que el usuario puede ingresar
*\param maximo Es el número máximo que el usuario puede ingresar
*\param retintentos Es el número de reintentos que el usuario tiene para ingresar el número correcto
*\return Un resultado que nos indica si la función se ejecutó correctamente
*
*
*/

int utn_getNumeroFlotante(float* pResultado, char* mensaje , char* mensajeError, float minimo, float maximo, int reintentos)
{
	int retorno = -1;
	float bufferFloat;


	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s", mensaje);
			scanf("%f",&bufferFloat);

			if(bufferFloat >= minimo && bufferFloat <= maximo)
			{
				*pResultado = bufferFloat;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while (reintentos >= 0);
	}

	return retorno;
}

/**
*\brief Solicita un caracter al usuario y devuelve un resultado
*\param mensaje Es el mensaje a ser mostrado
*\param pResultado Es la dirección de memoria en donde guardamos el caracter obtenido
*\param mensajeError Es el mensaje a ser mostrado en caso de que el usuario no ingrese el número correcto
*\param minimo Es el caracter mínimo que el usuario puede ingresar
*\param maximo Es el caracter máximo que el usuario puede ingresar
*\param retintentos Es el número de reintentos que el usuario tiene para ingresar el caracter correcto
*\return Un resultado que nos indica si la función se ejecutó correctamente
*
*
*/

int utn_getCaracter(char* pResultado, char* mensaje , char* mensajeError, char minimo, char maximo, int reintentos)
{
	int retorno = -1;
	char bufferChar;


	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
		do
		{
			printf("%s", mensaje);
			fflush(stdin);
			scanf("%c",&bufferChar);

			if(bufferChar >= minimo && bufferChar <= maximo)
			{
				*pResultado = bufferChar;
				retorno = 0;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);
	}

	return retorno;
}
