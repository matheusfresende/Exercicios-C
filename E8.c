/*
Linguagem C - Completa e Descomplicada
Capítulo 7 - Arrays de caracteres - strings
Exercícios
8

11/01/2018
Matheus Ferreira Resende
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 50

int main()
{
	//Checa se uma string esta contida dentro de outra:
	setbuf(stdin, NULL);  //Limpa o buffer do teclado

	char str1[tam], str2[tam];

	printf("Entre com duas strings:\n");
	gets(str1);
	gets(str2);

	if (strstr(str1, str2) != NULL)  //a função "strstr()" checa se uma string é substring de outra
		printf("Esta contida!\n");
	else
		printf("Nao esta contida\n");

	system("pause");
	return 0;
}