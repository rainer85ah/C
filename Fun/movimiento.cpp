/*Ejemplo de movimiento*/

#include <stdio.h>
#include <conio.h>
void main()
{
	int col,i;
   for(col=5;col<79;col++)
   {
   	gotoxy(col,3);
      printf("*");
      for(i=0;i<88888888;i++);
      clrscr();
   }
}
