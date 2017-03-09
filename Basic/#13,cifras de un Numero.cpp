/* Introducir un numero positivo asegurando esto y visualizar cuantas cifras tiene. */


#include <stdio.h>
#include <conio.h>



void main()
{
	int num,contCifras=1;

   textcolor(11);
   textbackground(1);
   clrscr();

	do
	{
   	gotoxy(25,6);
		cprintf("Numero: ");
   	scanf("%d",&num);
      clrscr();
	}while(num<0);

	while(num/10)
   {
   	num=num/10;
   	contCifras++;
   }

   gotoxy(25,8);
   cprintf("El Numero %d Tiene %d Cifras",num,contCifras);

   fflush(stdin);
   getchar();
                 
}//fin main