#include <stdio.h>
#include <stdlib.h>
#include <string.h>

FILE *resul;

int main()

{

 int aa, mm, dd;
 resul = fopen("datas.txt", "w");
 for(aa = 1970; aa < 2030; aa++)
   for(mm = 1; mm < 13; mm ++)
     for( dd = 1; dd < 32; dd++)
     {
       fprintf(resul, "%02d%02d%02d\n", aa, mm, dd);
       fprintf(resul, "%02d%02d%02d\n", dd, mm, aa);

       fprintf(resul, "%02d%02d%02d\n", aa, mm, dd);
       fprintf(resul, "%02d%02d%02d\n", dd, mm, aa);

       fprintf(resul, "%02d%02d%02d\n", aa, mm, dd);
       fprintf(resul, "%02d%02d%02d\n", dd, mm, aa);

       fprintf(resul, "%02d%02d%02d\n", aa, mm, dd);
       fprintf(resul, "%02d%02d%02d\n", dd, mm, aa);

      }

    fclose(resul);
    return 0;
}