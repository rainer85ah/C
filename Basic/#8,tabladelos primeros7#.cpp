//Tabla de multiplicar hasta el 10 de los primeros 7 numeros.

#include <stdio.h>
#include <conio.h>


void main()
{
	int num,cont;

   textcolor(11);
   textbackground(1);
   clrscr();

   gotoxy(20,3);
   cprintf("LAS TABLAS SON: ");
   for(cont=1;cont<=7;cont++)
   {
   	for(num=1;num<=10;num++)
      {
      	gotoxy(20,5+num);
   		cprintf("\n %d*%d=%d",cont,num,num*cont);
   	}//fin for
      fflush(stdin);
      getchar();
   }//fin for

   fflush(stdin);
   getchar();

}//fin main