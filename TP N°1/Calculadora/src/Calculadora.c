/*
 ============================================================================
 Name        : Calculadora.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Trabajo Práctico n°1
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"


int main(void){
 setbuf(stdout,NULL);
	int A=0;
	int B=0;
	int resulSuma=0;
	int resulResta=0;
	float resulDivision=0;
	int resulMultiplicacion=0;
	double resulFactorialA=0;
	double resulFactorialB=0;
	char salir='n';
	int menu;

	printf("**--..Menu Principal..--**");

	while(salir=='n')
	{
			printf("\n\n1.Ingresar 1er operando (A=x): %d", A);
			printf("\n2.Ingresar 2do operando (B=y): %d", B);
			printf("\n3.Calcular todas las operaciones");
			printf("\n4.Informar resultados");
			printf("\n5.Salir.\n");
			printf("\nIngrese numero de la opcion que desea utilizar (1,2,3,4 o 5): ");
			scanf("%d", &menu);
			switch(menu){
			case 1:
				printf("\n\nIngresar 1er operando: ");
				scanf("%d", &A);
				break;
			case 2:
				printf("\n\nIngresar 2do operando: ");
				scanf("%d", &B);
				break;
			case 3:
				resulSuma = calcSuma(A,B);
				resulResta = calcResta(A,B);
				resulDivision = calcDivision(A,B);
				resulMultiplicacion = calcMultiplicacion(A,B);
				resulFactorialA = calcFactorial(A);
				resulFactorialB = calcFactorial(B);
				system("pause");
				break;
			case 4:
				printf("\n\nEl resultado de la suma es: %d", resulSuma);
				printf("\nEl resultado de la resta es: %d", resulResta);
				if(B!=0)
				{
				printf("\nEl resultado de la division es: %.2f", resulDivision);
				}
				else
				{
					printf("\nNo se puede divir por 0");
				}
				printf("\nEl resultado de la multiplicacion es: %d", resulMultiplicacion);
				if(A>=0)
				{
					printf("\nEl resultado del factorial de A es: %.0f", resulFactorialA);
				}
				else
				{
					printf("\nNo se puede resolver el factorial de A por ser un numero negativo");
				}
				if(B>=0)
				{
					printf("\nEl resultado del factorial de B es: %.0f\n\n", resulFactorialB);
				}
				else
				{
					printf("\nNo se puede resolver el factorial de B por ser un numero negativo\n\n");
				}
				system("pause");
				break;
			case 5:
				do{
					printf("\n\nEsta seguro que desea salir? s/n :");
					fflush(stdin);
					scanf("%c", &salir);
				}while(salir!='n' && salir!='s');
				break;
			default:
				printf("\n\nError, ingrese opción válida\n\n");
				system("pause");
				break;
			}
			system("CLS");
			printf("\n");
		}

	system("pause");
		return EXIT_SUCCESS;
	}

