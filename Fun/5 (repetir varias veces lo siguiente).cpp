/*Repetir varias veces lo siguiente*/
#include<stdio.h>
void main()
{
	int num1,num2,aux,cont,dif;
   char seguir='s';
   while (seguir!='N' && seguir!='n')
   {
   	printf ("\n Introducir numero1: ");
      scanf ("%d",&num1);
      printf("\n Introducir numero2: ");
      scanf("%d",&num2);
      if (num1>num2)
      {
      	aux=num1;
         num1=num2;
         num2=aux;
      }//fin if
      if (num1>0 && num2>0)
      {
      	dif=num2-num1;
         for (cont=1;cont<=10;cont++)
         	printf ("\n %d * %d= %d",dif,cont,dif*cont);
      }//fin if
      else
      	if (num1<0 && num2>0)
         	for (cont=num1;cont<=num2;cont++)
            	printf ("\n %d,cont");
      printf("\n ¿Desea continuar? (S/N, n para terminar): ");
      scanf ("%c",&seguir);
   }//fin while
}//fin main