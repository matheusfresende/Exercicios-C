/*
** PygLatin Translator - A simple encriptator
** C Language
**
** Matheus Ferreira Resende
** Brasília, Brasil
** 11/01/2018
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SZ 50  //size of a string  

int main()
{
	char str[SZ], *sufix = "ay";
	char temp;

	printf("Enter a word: ");
	scanf("%s", str);

	//get the first letter:
	temp = str[0];

	//Put it at the end of the word:
	str[strlen(str)] = temp;

	//Add the sufix to the end of the word:
	strcat(str, sufix);

	//Now we print the new word, without it first letter:
	for (int i = 1; i < strlen(str); i++)
		printf("%c", str[i]);
	printf("\n");

	printf("\nThank you for your time!\n\n");

	system("pause");
	return 0;
}