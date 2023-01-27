#include <iostream>
#include <stdlib.h>

using namespace std;

void text_animation(char const a[1000])
{
     int i;double k;
     for(i =0; a[i] !='\0';++i)
     {
         for(k=0;k<50000000;++k);
         cout << a[i];
     }
}


void slide_animation(const char* a)
{
     int i,k;
     double j;
     for(k=0;k<70;++k)
     {
         for(i=0;i<k;++i)
         {
             cout << " ";
         }
         cout << a;
         for(j=0;j<10000000;++j);
         system("cls");
     }
     cout <<"                                       "<<a<<"  ola mundo";
}

int main()
{
   
    cout<<"                   ";
    slide_animation("05.03.2022");
    cout<<endl;
    text_animation("              BEM VINDO AO CARNAVAL");
    cout<<endl;
    text_animation("                  AKILLES E JOY");
    return 0;

}

// REFERENCIA: https://www.youtube.com/watch?v=xKz-kLB3eT8