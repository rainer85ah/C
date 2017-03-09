// Introducir un numero entero y visualizar el producto de su factorial


#include <stdio.h>
#include <conio.h>


void main()
{
	int num,Cont;

   textcolor(11);
   textbackground(1);
   clrscr();

   do
   {
   	gotoxy(20,6);
   	cprintf("Introducir Numero: ");
      scanf("%d",&num);
      clrscr();
   }while(!num);

   gotoxy(25,8);
	cprintf("Factorial: ");
	for(Cont=num-1;Cont;Cont--)
   {
   	gotoxy(25,10+Cont);
   	cprintf("%d*%d=%d",num,Cont,num*Cont);
      num=num-1;
   }

   fflush(stdin);
   getchar();
   
}//fin main