/* Introduce un numero oculto entre el 1 y 100 asegurando esto,
introduce otro numero entre 1 y 100 e intenta a adivinarlo en 10 intentos. */


#include <stdio.h>
#include <conio.h>



void main()
{
	int numOculto,num,cont=0;

   textcolor(11);
   textbackground(1);
   clrscr();

   do
   {
   	gotoxy(20,3);
   	cprintf("Numero Oculto: ");
      scanf ("%d",&numOculto);
      clrscr();
   }while(numOculto<1 || numOculto>100);

 	do
 	{
      clrscr();
   	do
   	{
      	gotoxy(20,6);
   		cprintf("Numero: ");
      	scanf("%d",&num);
   	 }while(num<1 || num>100);

   	if(num==numOculto)
      {
      	gotoxy(20,8);
   		cprintf("Acertaste, Numero Correcto en %d Intentos!!!",cont+1);
      }
      else
      {
   		gotoxy(20,8);
   		cprintf("No lo adivinaste!!!!");

        	if(num>numOculto)
         {
      		gotoxy(20,10);
   			cprintf("Numero Grande");
      	}
         else
         {
      		gotoxy(20,10);
      		cprintf("Numero Pequeno");
       	}
      }
      cont++;
      fflush(stdin);
      getchar();
      
   }while(cont<10 && num!=numOculto);

   fflush(stdin);
   getchar();

}// fin main
