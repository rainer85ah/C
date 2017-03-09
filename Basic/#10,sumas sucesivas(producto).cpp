
/* Introducir 2 numeros enteros asegurando esto, incluido el cero, visualizar
su producto mediante suma sucesivas */


#include <stdio.h>
#include <conio.h>



void main()
{
	int num1,num2,acum=0;

   textcolor(11);
   textbackground(1);
   clrscr();

   do
   {
   	gotoxy(20,3);
   	cprintf("Numero 1: ");
   	scanf("%d",&num1);
      gotoxy(20,6);
   	cprintf("Numero 2: ");
   	scanf("%d",&num2);  
   }while(!num1 && !num2);

   for(num2;num2>0;num2--)
   	acum=acum+num1;

   gotoxy(20,8);
   cprintf("El Producto Mediante Sumas Sucesivas Es %d ",acum);

   fflush(stdin);
   getchar();

}// fin main