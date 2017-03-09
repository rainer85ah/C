
/* introducir un numero de 3 cifras asegurando esto y visualizar los multiplos
 de 7 entre 1 y dicho numero. */


#include <stdio.h>
#include <conio.h>


void main()
{
 	int num,limInf=7;

   do
   {
   	printf("\n Introducir numero de 3 cifras: ");
      scanf("%d",&num);
   }while(num<99 || num>1000);

   printf(" \n Los Multiplos del 7 entre estos Numeros son: ");
   do
   {
   	printf("%d ,",limInf);
      limInf+=7;
   }while(limInf<=num);

fflush(stdin);
getchar();
}// fin main
