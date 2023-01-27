#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void gera_celular(const char prefixo[]);

FILE *resul;
int tamanho = 4;
unsigned long int limite = 999999;
char arquivo[100];

int main()
{
    printf("Nome do arquivo: ");
    scanf("%s", arquivo);
    sprintf(arquivo, "%s.txt", arquivo);

    gera_celular("96");

    return 0;
}


void gera_celular(const char prefixo[]) 
{
   unsigned long int i;

   resul = fopen(arquivo, "a");
   
   printf("\nGerando de wordlist: %s", prefixo);
   for (i = 0; i < limite+1; i++)
       fprintf(resul, "%s%06li\n", prefixo, i);

   fclose(resul);
}
