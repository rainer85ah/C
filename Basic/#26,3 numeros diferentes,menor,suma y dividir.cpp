
/* Introducir 3 valores enteros diferentes cada uno, asegurando esto y viualizar
 al menor de los 3 y la suma de los otros 2 dividido entre el menor. */

#include <stdio.h>


void main()
{
	int num1,num2,num3,Suma=0,Menor=0;

   	printf("\n Introducir Numero 1: ");
   	scanf("%d",&num1);

   do
   {
   	printf("\n Introducir Numero 2: ");
   	scanf("%d",&num2);
   }while(num2==num1);

   do
   {
   	printf("\n Introducir Numero 3: ");
   	scanf("%d",&num3);
   }while(num2==num3 || num1==num3);

   if(num1>num2)
   {
   	if(num2<num3)
      {
      	Menor=num2;
      	printf("\n El Menor es: %d",Menor);
         Suma=num1+num3;
      }
       else
       {
         Menor=num3;
      	printf("\n El Menor es: %d",Menor);
         Suma=num1+num2;
       }
   }
   else
   {
      Menor=num1;
      printf("\n El Menor es: %d",Menor);
      Suma=num3+num2;
   }// fin si

   if(Menor)

   	printf("\n La suma es: %d",Suma);
   	printf("\n La Suma entre el Menor es %d/%d=%d",Suma,Menor,Suma/Menor);

fflush(stdin);
getchar();

}// fin main