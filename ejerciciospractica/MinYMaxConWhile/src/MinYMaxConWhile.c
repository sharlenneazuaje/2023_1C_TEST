/*
 ============================================================================
 Name        : MinimoYMaximoConWhile.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//Pedir numeros hasta que el usuario quiera (888) y dar como resultado maximo y minimo

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void) {
	setbuf(stdout,NULL);

	int num;
	int max;
	int min;
	int flag = TRUE;

	do
	{
		printf("Ingrese un numero");
		scanf("%d",&num);

		if(flag == TRUE)
		{
			max = num;
			min = num;
			flag = FALSE;
		}
		else
		{
			if(num == 888)
			{
				break;
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
		}
	}
	while(TRUE);

	printf("El minimo es %d y el maximo es %d",min,max);

	return EXIT_SUCCESS;
}
