// Introducir un numero mayor que cero asegurando esto y visualizar si es primo.

#include <stdio.h>
#include <conio.h>


void main()
{
	int num;

   textcolor(11);
   textbackground(1);
   clrscr();

   do
   {
   	gotoxy(25,6);
   	cprintf("Numero: ");
      scanf("%d",&num);
      clrscr();
   }while(num<=0);

   if(num%2==0 && num!=2 || num==1)
   {
   	gotoxy(20,8);
   	cprintf("El Numero %d No es Primo",num);
   }
   else
   {
   	gotoxy(20,8);
   	cprintf("El Numero %d es Primo",num);
   }// fin else

   fflush(stdin);
   getchar();

}// fin main