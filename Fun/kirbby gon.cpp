/*Ejemplo de movimiento*/

#include <stdio.h>
#include <conio.h>
void main()
{
	int col, i;
   for (col=1;col<80;col++)
   {
   	gotoxy(col,3);

      if(col%2)
      	printf("\\(+_+)/");
      else
         printf("<(^_^)>");

      for(i=0;i<888888888;i++);
      clrscr();
   }
}