
/* Introduce 3 numeros enteros positivos y diferentes cada uno asegurando esto.
Suma los dos numeros mayores y halla el menor. Halla el cociente entre la suma
 y el numero menor */

#include <stdio.h>
#include <conio.h>


void main()
{
	int num1,num2,num3,Menor,Suma;

   textcolor(11);
   textbackground(1);
   clrscr();

   do
   {
	   gotoxy(25,3);
   	cprintf("Numero-1: ");
	   scanf("%d",&num1);
      gotoxy(25,3);
      clreol();
   }while(!num1);

	do
   {
   	gotoxy(25,5);
    	cprintf("Numero-2: ");
      scanf("%d",&num2);
      gotoxy(25,5);
      clreol();
   }while(!num2 || num2==num1);

   do
   {
   	gotoxy(25,7);
     	cprintf("Numero-3: ");
     	scanf("%d",&num3);
      gotoxy(25,7);
      clreol();
   }while(num3==num2 || num3==num1 || !num3);

   if(num1<num2)
   {
   	if(num1<num3)
      {
       	Suma=num2+num3;
         Menor=num1;
      }//fin si
      else
      {
      	Suma=num2+num1;
         Menor=num3;
      }//fin else
   }// fin si
   else
   {
   	if(num3>num2)
      {
      	Suma=num1+num3;
         Menor=num2;
      }// fin si
      else
      {
      	Suma=num2+num1;
         Menor=num3;
      }//fin else
   }// fin else

   clrscr();
   gotoxy(25,6);
   cprintf("El Numero Menor es:%d",Menor);

   if(Menor)
   {
   	gotoxy(25,8);
   	cprintf("El Cociente de %d/%d=%.2f",Suma,Menor,(float)Suma/Menor);
   }

     fflush(stdin);
     getchar();

}// fin main


