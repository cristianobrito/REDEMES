#include <stdio.h>
#include <windows.h>
 
//Função gotoxy
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
 
main(){
  int coluna = 5;
  int linha  = 3;
  system("cls");
   
  gotoxy(coluna, linha);
  printf("Terminal de");
   
  gotoxy(coluna, linha+1);
  printf("Informacao.\n");
}