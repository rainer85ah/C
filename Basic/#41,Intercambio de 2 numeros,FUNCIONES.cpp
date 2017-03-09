
//******Ejercicios de Menu de Opciones*******

//Ejemplo de ejercicios sobre funciones******************

#include <stdio.h>

void Intercambio(int,int);    //PROTOTIPO*****************

//************MAIN**********************
void main()
{
	int num1=0,num2=0;

   printf("\n Introducir Numero 1: ");
   scanf("%d",&num1);

   printf("\n Introducir Numero 2: ");
   scanf("%d",&num2);

   printf("\n En el NUM1 esta: %d, y en el NUM2 el: %d",num1,num2);

   Intercambio(num1,num2);                   //******LLAMADA********

 fflush(stdin);
 getchar();

}// fin main

//*********DEFINICION******************

void Intercambio(int num1,int num2)
{
	int aux;

   aux=num1;
   num1=num2;
   num2=aux;

   printf("\n En el NUM1 esta: %d, y en el NUM2 el: %d",num1,num2);

}//fin Funcion
