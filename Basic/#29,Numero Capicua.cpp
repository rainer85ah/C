
// Introducir un Numero de 3 cifras asegurando esto y visualizar si es Capicua o No. Hacer esto 2 veces.


#include  <stdio.h>


void main()
{
	int num,aux,Resto,contVeces;

 for(contVeces=0;contVeces<2;contVeces++)
 {
   do
   {
   	printf("\n Introducir Numero(100-999):  ");
      scanf("%d",&num);
   }while(num<99 || num>999);

   Resto=(num%10);
   aux=num/10;
   aux=aux/10;

   if(aux==Resto)
   	printf("\n El Numero es Capicua");
   else
   	printf("\n El Numero NO es Capicua");
 }//fin for
 
fflush(stdin);
getchar();

}// fin main