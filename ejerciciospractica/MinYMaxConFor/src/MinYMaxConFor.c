/*
 ============================================================================
 Name        : MinimoYMaximoConFor.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//Pedir 5 numeros y dar como resultado el minimo, el maximo y el promedio

int main(void) {
	setbuf(stdout,NULL);

	int i;
	int num;
	int min;
	int max;
	int acum = 0;
	int prom;

	for(i=0;i<5;i++)
	{
		printf("Ingrese un numero:\n");
		scanf("%d",&num);

		if(i == 0)
		{
			min = num;
			max = num;
		}
		else
		{
			if(num > max)
			{
				max = num;
			}
			if(num < min)
			{
				min = num;
			}
		}

		acum += num;

	}

		prom = acum / i;

		printf("El maximo es %d, el minimo es %d y el promedio es %d",max,min,prom);



	return EXIT_SUCCESS;
}
