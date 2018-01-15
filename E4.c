/*
Linguagem C - Completa e Descomplicada
Capítulo 8 - Tipos definidos pelo programador
Exercícios
4

15/01/2018
Matheus Ferreira Resende
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
* Programa que calcula a area, o comprimento da diagonal e o perimetro de um retangulo
* Entradas: coordenadas do ponto superior esquerdo e coordenadas do ponto inferior direito
*/

typedef struct
{
	double x, y;
} Ponto;

typedef struct 
{
	Ponto p1, p2;
} ret;

//Funções:---------------------------------------------------------------------------------------------------------------------------------------------------------
double dist(double a, double b, double c, double d)
{
	double dist;

	dist = sqrt(pow(a - c, 2) + pow(b - d, 2));

	return dist;
}
//Programa Principal:==============================================================================================================================================

int main()
{
	ret Retang;
	Ponto p3, p4;
	double base, h, per, area, diag;

	printf("Programa que calcula a diagonal, o perimetro e area de um retangulo\n\n");

	printf("Entre com as coordenadas do ponto superior esquerdo: ");
	scanf("%lf %lf", &Retang.p1.x, &Retang.p1.y);
	printf("Entre com as coordenadas do ponto inferior direito: ");
	scanf("%lf %lf", &Retang.p2.x, &Retang.p2.y);

	//Valores dos demais pontos:
	p3.x = Retang.p2.x;
	p3.y = Retang.p1.y;
	p4.x = Retang.p1.x;
	p4.y = Retang.p2.y;

	//calculando o valor da base:
	base = dist(p4.x, p4.y, Retang.p2.x, Retang.p2.y);

	//calculando o valor da altura:
	h = dist(Retang.p1.x, Retang.p1.y, p4.x, p4.y);

	//calculando o valor da diagonal:
	diag = dist(Retang.p1.x, Retang.p1.y, Retang.p2.x, Retang.p2.y);

	//calculando a area:
	area = base * h;

	//calculando o perimetro:
	per = (base * 2) + (h * 2);

	printf("\nInformacoes sobre o Retangulo:\n");

	printf("Pontos: (%.0f, %.0f) , (%.0f, %.0f) , (%.0f, %.0f) , (%.0f, %.0f)\n", Retang.p1.x, Retang.p1.y, Retang.p2.x, Retang.p2.y, p3.x, p3.y, p4.x, p4.y);
	printf("Base = %.2f", base);
	printf("\tAltura = %.2f\n", h);
	printf("Area = %.2f\n", area);
	printf("Perimetro = %.2f\n", per);
	printf("Diagonal = %.2f\n", diag);

	printf("***************************************************************************************************\n\n");

	system("pause");
	return 0;
}