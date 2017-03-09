/* Introducir dos numeros por teclado de dos cifras asegurando esto,mas un
caracter de un signo de operacion y realizar la operacion del signo.
Repetir este proceso hasta que en la variable seguir se introdusca la cadena si.*/

#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
	char signoOper,seguir[3]="si";
   int num1,num2;

   textcolor(11);
   textbackground(1);
   clrscr();
   gotoxy(20,1);
   cprintf("Introducir Numeros de 2 Cifras!!");
   
 	do
 	{
   	do
   	{
      	gotoxy(25,3);
    		cprintf("Numero 1: ");
      	scanf("%d",&num1);
         gotoxy(25,3);
         clreol();
   	}while(num1<10 || num1>99);

   	do
   	{
      	gotoxy(25,5);
      	cprintf("Numero 2: ");
      	scanf("%d",&num2);
         gotoxy(25,5);
         clreol();
    	}while(num2<10 || num2>99);

    	gotoxy(25,7);
      cprintf("Simbolo De La Operacion: ");
      fflush(stdin);
      scanf("%c",&signoOper);    
      clrscr();

      switch(signoOper)
      {
        	case '+':
         	gotoxy(25,6);
     			cprintf("La Suma de %d+%d=%d",num1,num2,num1+num2);
         break;

         case '*':
         	gotoxy(25,6);
     			cprintf("El Producto es %d*%d=%d",num1,num2,num1*num2);
         break;

         case '/':
         	gotoxy(25,6);
     			cprintf("La Division es %d/%d=%.2f",num1,num2,(float)num1/num2);
         break;

         case '-':
         	gotoxy(25,6);
     			cprintf("La Resta es %d-%d=%d",num1,num2,num1-num2);
         break;

         default:
         	gotoxy(25,6);
     			cprintf("Error!! Simbolo Diferente(+,-,/,*)!!");
         break;
         
      }//end switch

      gotoxy(20,8);
    	cprintf("Desea Continuar(si/no)?: ");
      fflush(stdin);
    	gets(seguir);
      clrscr();

	}while(stricmp(seguir,"si")==0);

   fflush(stdin);
   getchar();

}//fin main
