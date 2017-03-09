
/* introducir un numero de 3 cifras asegurando esto y visualizar los multiplos
 de 7 entre 1 y dicho numero. */


#include <stdio.h>


void main()
{
 	int num,limInf=7;  //limInf=0;

   do
   {
   	printf("\n Introducir Numero de 3 Cifras: ");
      scanf("%d",&num);
   }while(num<99 || num>999);

   printf(" \n Los Multiplos del 7 entre estos Numeros son: ");
   /* if(num%7==0))
   	else
      limInf+=1*/
   do
   {
   	printf("\n %d ",limInf);
      limInf+=7;
   }while(limInf<=num);

fflush(stdin);
getchar();
}// fin main
