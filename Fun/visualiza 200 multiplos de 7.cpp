/*Visualizar los primeros 200 múltiplos de 7*/

#include <stdio.h>
#include <dos.h>
#include <conio.h>
void main ()
{
	int cont7=0,contNum=0;
   do
   {
   	cont7=cont7+7;
      printf("\n %d", cont7);
      sleep(1);
      clrscr();
      contNum++;
   }while(contNum<200);
   fflush(stdin);
   getchar();
}//fin main