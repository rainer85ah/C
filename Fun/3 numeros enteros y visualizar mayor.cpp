/*Introducir 3 números enteros cualesquiera y dejar en num1 el menor, num3 el mayor y num2 el de en medio. Visualizar los 3 al final*/

#include <stdio.h>
void main()
{
	int num1, num2, num3, aux;
   printf ("\n introduce un numero: ");
   scanf("%d",&num1);
   printf ("\n introduce otro numero: ");
   scanf("%d",&num2);
   printf ("\n introduce otro numero: ");
   scanf("%d",&num3);
   printf("\n direccion de memoria: %X y contiene: %d",&num1, num1);
   printf("\n direccion de memoria: %X y contiene: %d",&num2, num2);
   printf("\n direccion de memoria: %X y contiene: %d",&num3, num3);
   if (num1>num2)
   {
   	aux=num1;
      num1=num2;
      num2=aux;
   }//fin si
   if (num2>num3)
   {
   	aux=num2;
      num2=num3;
      num3=aux;
   }//fin si
   if (num1>num3)
   {
   	aux=num1;
      num1=num3;
      num3=aux;
   }//fin si
   printf ("\n \n \n El numero menor es %d", num1);
   printf ("\n El numero mediano es %d", num2);
   printf ("\n El numero mayor es %d", num3);
   fflush(stdin);
   getchar();
}//fin main
