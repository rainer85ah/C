/* Introducir la altura mayor de 20 alumnos de una clase en metros, y visualizar la altura mayor */

#include <stdio.h>
#include <conio.h>


void main()
{
	int cont;
	float alt,altMax=0;

   textcolor(11);
   textbackground(1);
   clrscr();

   for(cont=1;cont<=20;cont++)
   {
   	gotoxy(20,6);
   	cprintf("Altura Del Alumno %d: ",cont);
   	scanf("%f",&alt);
      clrscr();
      
      if(alt>altMax)
      	altMax=alt;
   }//fin for

   gotoxy(20,8);
   cprintf("La Altura Maxima de la Clase es: %.2f", altMax);

   fflush(stdin);
   getchar();

}//fin main
