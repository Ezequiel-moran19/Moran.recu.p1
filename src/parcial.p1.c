/*
 ============================================================================
 Name        : p1.c
 Author      : Ejer
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char invertirCadena(char invertir[], int tam);
char ordenarCaracteres(char palabra [],int tam);

int main()
{

    return 0;
}
char invertirCadena(char invertir[], int tam)
{
   char palabra[200],
    invertida[200];
    strcpy(invertida, palabra);
	tam = strlen(palabra);
	for(int i = 0; i < tam; i++)
	{
		invertida[i] = palabra[tam - 1 - i];
	}
}

char ordenarCaracteres(char palabra [],int tam)
 {
      int aux;
        for(int i=0;i<= tam-1;i++)
        {
            for(int j= i + 1;j<=tam;j++)
            {
                if (palabra[i]>palabra[j])
                {
                    aux= palabra[i];
                    palabra[i] = palabra[j];
                    palabra[j] = aux;
                }
            }

        }
 }
