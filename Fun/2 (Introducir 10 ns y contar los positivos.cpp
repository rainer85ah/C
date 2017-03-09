/*INtroducir 10 números por teclado y contar cuantos de ellos son positivos. Visualizar al final el resultado*/
#include<stdio.h>
void main()
{
	int cont,contPos=0,num;
   for (cont=1;cont<=10;cont++)
   {
   	printf ("\n Numero:");
      scanf ("%d",&num);
      if (num>=0)
      	contPos++;
   }//fin for
   printf ("\n Hay %d positivos",contPos);
   fflush (stdin);
   getchar();
}//fin main