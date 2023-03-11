/*
 ============================================================================
 Name        : PromedioWhile.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Solicitar al usuario que ingrese una serie de numeros el cual finaliza al introducir
//el 999 (que no debe ser tenido en cuenta para hacer el cálculo)
//Luego de haber finalizado el ingreso, el programa deberá mostrar
//el promedio de dichos numeros por pantalla

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void) {
	setbuf(stdout,NULL);

	int num;
	int acum = 0;
	int cont = 0;
	int prom;

	do
	{
		printf("Ingrese un numero: (con 999 finaliza el programa)");
		scanf("%d",&num);

		if(num == 999)
		{
			break;
		}
		else
		{
			acum += num;
			cont++;
		}

	}
	while(TRUE);

	prom = acum / cont;

	printf("El promedio de los números ingresados es %d",prom);

	return EXIT_SUCCESS;
}
