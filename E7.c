/*
Linguagem C - Completa e Descomplicada
Capítulo 7 - Arrays de caracteres - strings
Exercícios
7

11/01/2018
Matheus Ferreira Resende
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define tam 50

int main()
{
	//Checa se uma string é um palindromo:

	setbuf(stdin, NULL);  //limpa o buffer;

	char str[tam], str_inv[tam];

	printf("Entre com uma string: ");
	gets(str);

	for (int j = 0, i = strlen(str) - 1; i >= 0; i--, j++)
	{
		str_inv[j] = str[i];

		//Adicionando o '\0' ao final da string
		if (i == 0)
		{
			j++;
			str_inv[j] = '\0';
		}
	}

	if (strcmp(str, str_inv) == 0)
		printf("E um palindromo!\n");
	else
		printf("Nao e um palindromo!\n");

	system("pause");
	return 0;
}