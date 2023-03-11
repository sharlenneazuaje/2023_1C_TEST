/*
 ============================================================================
 Name        : RestaConIf.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Solicitar al usuario dos numeros distintos de 0, restarlos y luego dependiendo del
//resultado, si es positivo imprimir en pantalla "Resultado Positivo"
//y si negativo, "Resultado Negativo"

int main(void) {
	setbuf(stdout,NULL);

	int num1;
	int num2;
	int resta;

	printf("Ingrese un numero distinto de 0: \n");
	scanf("%d",&num1);

	while(num1 == 0)
	{
		printf("Ingrese un numero distinto de 0: \n");
		scanf("%d",&num1);
	}

	printf("Ingrese un numero distinto de 0: \n");
	scanf("%d",&num2);

	while(num2 == 0)
	{
		printf("Ingrese un numero distinto de 0: \n");
		scanf("%d",&num2);
	}

	resta = num1 - num2;

	printf("La resta es %d \n",resta);

	if(resta > 0)
	{
		printf("El resultado es positivo");
	}
	else
	{
		printf("El resultado es negativo");
	}




	return EXIT_SUCCESS;
}
