/*******************************************************************************
Introducir dos numeros enteros positivos asegurando que ambos lo son y realizar
mediante una funcion lo siguiente:

--> dejar en Num1 el menor y visualizar la tabla de multiplicar del mayor

              realizar todo esto mediante funciones
*******************************************************************************/

#include <stdio.h>
#include <ctype.h>
int NumPositivo();
void Intercambio(int,int);
void TablaMult(int);
char Multi5(int);
void main()
{
	int num1, num2;
   char conf;
   num1=NumPositivo();
   num2=NumPositivo();
   printf("\n Antes de hacer nada: \n num 1= %d \n num 2= %d",num1,num2);
   Intercambio(num1,num2);
   printf("\n \n Tras intercambiar a num 1 el menor y a num 2 el mayor: \n num 1= %d \n num 2= %d",num1,num2);
   conf=Multi5(num1);
   if(conf='s')
   	printf("\n \n Num 1 (%d) es múltiplo de 5");
   else
      printf("\n \n Num 1 (%d) NO es múltiplo de 5");
   fflush(stdin);
   getchar();
}//fin main

//DEFINIMOS LAS FUNCIONES

// La funcion para saber si son positivos

int NumPositivo()
{
	int num;
   do
   {
   	printf("\n dime un numero: ");
      scanf("%d",&num);
   }while(num<=0);
   return(num);
}//fin NumPositivo

// La funcion para saber cual es el mayor

void Intercambio (int n1, int n2)
{
	int aux;
   if (n1>n2)
   {
   aux=n1;
   n1=n2;
   n2=aux;
   }
   printf("\n Durante el Intercambio a num1 menor y a num2 mayor son: \n num 1= %d \n num 2= %d ",n1,n2);
   TablaMult(n2);
}//fin intercambio.

// La funcion de tabla de multiplicar

void TablaMult(int n)
{
	int cont;
   for(cont=1;cont<=10;cont++)
   	printf("\n \n %d * %d = %d", n, cont, n*cont);
}

// La funcion multiplo de 5

char Multi5(int n1)
{
	char conf;
   if(n1%5=0)
   	return('s');
}