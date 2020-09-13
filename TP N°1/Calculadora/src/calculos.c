/*
 * calculos.c
 *
 *  Created on: 3 sep. 2020
 *      Author: Avila, Ignacio Leonel.
 */

int calcSuma(int A, int B)
{
	int suma=0;
	suma=A+B;
	return suma;
}
int calcResta(int A, int B)
{
	int resta=0;
	resta=A-B;
	return resta;
}
float calcDivision(int A, int B)
{
	float division=0;
	division=(float)A/B;
	return division;
}
int calcMultiplicacion(int A, int B)
{
	int multiplicacion=0;
	multiplicacion=A*B;
	return multiplicacion;
}
double calcFactorial(double AB)
{
	double factorial=1;
	for(int i=1;i<=AB;i++)
	{
		factorial*=i;
	}
	if (AB == 0){
		factorial = 0;
	}
	return factorial;
}

