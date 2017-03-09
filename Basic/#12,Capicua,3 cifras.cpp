/* Introducir un numero positivo de 3 cifras, asegurando esto y visualizar	si es capicua */

#include <stdio.h>
#include <conio.h>


void main()
{
   int num,Resto,c;

   textcolor(11);
   textbackground(1);
   clrscr();

	do
   {
   	gotoxy(25,6);
   	cprintf("Numero: ");
      scanf("%d",&num);
      clrscr();
   }while(num<100 && num>999);

   Resto=num%10;
   c=num/10;
   c=c/10;

   if(c==Resto)
   {
   	gotoxy(25,8);
   	cprintf("El Numero es Capicua!! ");
   }
   else
   {
   	gotoxy(25,8);
   	cprintf("El Numero no es Capicua!! ");
   }

   fflush(stdin);
   getchar();

}//fin main