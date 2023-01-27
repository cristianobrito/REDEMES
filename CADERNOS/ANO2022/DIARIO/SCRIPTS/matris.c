#include <stdio.h>

int main()
{
  int t, i, num[3][4];

   for(t=0; t<3; ++t)
     for(i=0; i<4; ++i)
       num[t][i] = (t*4) +i+1;

    /* ESCREVENDO */
    for(t=0; t<3; ++t)
    {
      for(i=0; i<4; ++i)
        printf("%3d ", num[t][i]);
        printf("\n");
    }
    return (0);
};