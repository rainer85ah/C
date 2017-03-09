/* Introducir un numero entero positivo asegurando esto, y si es par visualizar
su tabla de multiplicar sino lo es visualizar su opuesto. */

 
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
   	gotoxy(25,6);
   	cprintf("Introducir Numero: ");
   	scanf("%d",&num);
      clrscr();
   }while(num<=0);

   if(num%2==0)
   {
   	clrscr();
   	gotoxy(20,3);
      cprintf("Tabla de multiplicar del: %d",num);
    	for(cont=1;cont<=10;cont++)
      {
       	gotoxy(25,4+cont);
     		cprintf("%d * %d = %d",num,cont,num*cont);
      }
   }
   else
   {
   	gotoxy(30,8);
     	cprintf("Visualizar Opuesto: ");
      gotoxy(25,10);
      cprintf("El opuesto de %d es igual a %d",num,-num);
   }// fin si

   fflush(stdin);
   getchar();

}// fin main