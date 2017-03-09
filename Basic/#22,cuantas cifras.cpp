
/* Introudicr un numero entero cualquiera y visualizar cuantas cifras tiene? */

#include <stdio.h>


void main()
{
	int num,num1,contCifras=0;
    do
    {
   	printf("\n\t Introducir numero: ");
      scanf("%d",&num);
     }while(num<=0);

   for(num1=num;num1;contCifras++)
   {
    	num1=(num1/10);
   }// fin while

   printf("\n El numero %d tiene %d Cifras.",num,contCifras);

fflush(stdin);
getchar();

}// fin main