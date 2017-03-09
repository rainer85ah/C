#include <stdio.h>
#include <conio.h>

void main()
{
   int col,i,fila;
   for(fila=3;fila<20;fila++)
   {
   	for(col=5;col<79;col++)
		{
   		gotoxy(col,fila);
	      printf("*");
         if(col%2)
         {
         	gotoxy(col-1,fila+1);
         	printf("\\|/");
         	gotoxy(col,fila+2);
         	printf("|");
         }
         else
      	{
            gotoxy(col,fila+1);
         	printf("|");
            gotoxy(col-1,fila+2);
            printf("/|\\");
			}
         gotoxy(col-1,fila+3);
         printf("/ \\");
   	   for(i=0;i<222222222;i++);
      	clrscr();
   	}//fin for
   }//fin for
}//fin main




