/*Introducir un numero y visualizar cuantas cifras tiene.
Repetir el proceso varias veces hasta que la pregunta de continuar se conteste con una "n"*/
#include <stdio.h>
#include <ctype.h>
void main ()
{
	int num1, contCifras, aux;
   char seguir='s';
   while(toupper(seguir)=='S')
   {
   	printf ("\n Mete Num1: ");
      scanf ("%d",&num1);
      contCifras=0;
      aux=num1;
      while (aux!=0)
      {
         contCifras=contCifras+1;
         aux=aux/10;
      }// fin while
      printf("\n el numero %d tiene %d cifras",num1,contCifras);
      printf("\n ¿desea continuar (S/N): ");
      fflush(stdin);
      scanf("%c",&seguir);
   }//fin while
   fflush(stdin);
   getchar();
}
