//Tabla de multiplicar de un Numero X.

#include <stdio.h>
#include <conio.h>


void main()
{
	int num,cont;

   textcolor(11);
   textbackground(1);
   clrscr();

   do
   {
   	gotoxy(10,3);
   	cprintf("Numero para la Tabla de Multiplicar: ");
      scanf("%d",&num);
      clrscr();
   }while(!num);

   clrscr();
   gotoxy(25,3);
   cprintf("La Tabla de Multiplicar del %d es: ",num);
   for(cont=1;cont<=10;cont++)
   {
   	gotoxy(35,6+cont);
   	cprintf("%d*%d=%d", num,cont,num*cont);
   }

   fflush(stdin);
   getchar();

}// fin main