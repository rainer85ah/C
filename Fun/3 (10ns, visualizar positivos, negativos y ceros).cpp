/*Introducir 10 numeros por teclado y visualizar cuantos son negativos, cuantos positivos y cuantos 0*/
#include <stdio.h>
void main()
{
	int cont,contPos=0,contNeg=0,contCero=0,num;
   for (cont=1;cont<=10;cont++)
   {
   	printf ("\n Numero:");
      scanf ("%d",&num);
      if (num!=0)
      	if (num>0)
         	contPos++;
         else
            	contNeg++;
      else
      	contCero++;
   }//fin for
   printf ("\n Hay %d positivos",contPos);
   printf ("\n Hay %d negativos",contNeg);
   printf ("\n Hay %d ceros",contCero);
   fflush (stdin);
   getchar();
}//fin main