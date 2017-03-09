
// Realizar La tabla de Multiplicar del 1 al 10, exepto para los multiplos de 3


#include <stdio.h>


void main()
{
	int contM,contN;
   
   printf("\n La Tabla de Multiplicar exepto los multiplos de 3:  ");

   for(contN=1;contN<=12;contN++)
   {
   	if(contN%3==0 || contN%5==0 || contN%7==0 || contN%9==0)
      	continue;
      else
      	for(contM=1;contM<=10;contM++)
      	printf("\n ES Igual %d*%d%=%d",contN,contM,contN*contM);
   }// fin for

   fflush(stdin);
   getchar();
}// fin main