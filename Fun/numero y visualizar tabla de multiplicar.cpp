/*Introducir un número y visualizar su tabla de multiplicar*/
#include<stdio.h>
void main()
{
	int contNum=0,num;
   printf("\n Introduce numero: ");
   scanf("%d",&num);
   do
   {
   	contNum++;
      printf("\n %d * %d = %d", num,contNum,num*contNum);
   }while(contNum!=10);
   fflush(stdin);
   getchar();
}//fin main