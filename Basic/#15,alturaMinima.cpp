/* Introducir la altura de 20 alumnos de una clase, y visualizar la altura menor en centimentros */

#include <stdio.h>
#include <conio.h>


void main()
{
	float alt,altMin=999;
   int cont;

   textcolor(11);
   textbackground(1);
   clrscr();

   for(cont=1;cont<=5;cont++)
   {
   	gotoxy(20,6);
   	cprintf("Altura Del Alumno %d: ",cont);
   	scanf("%f",&alt);
      clrscr();

      if(alt<altMin)
      	altMin=alt;
   }//fin for

   gotoxy(20,8);
   cprintf("La Altura Minima de la clase es: %.2f",altMin);

   fflush(stdin);
   getchar();
}//fin main