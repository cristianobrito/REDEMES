#include <stdio.h>
#include <stdlib.h>
/*
    EX18:
         Tamanho de um inteiro na memória:
         limites:
         2.147.483.648 ate -2.147.483.648

         abaixo depois que incrementamos
         x ocorre o estouro do buffer
*/
int main()
{
    int x = 2147483647;

    printf("Valor de x:  %d\n", x);
    x++;
    printf("Valor de x:  %d\n", x);


    return 0;
}
