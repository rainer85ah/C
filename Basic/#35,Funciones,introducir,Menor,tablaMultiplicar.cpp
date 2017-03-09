/*  Introducir 2 numeros y visualizar la tabla de Multiplicar del menor,
 crea funciones para introducir los 2 numero,hallar al menor y la tabla de multiplicar. */


#include <stdio.h>

//*******prototipos********
int introducirNumeros();
int hallarElMenor(int,int);
void tablaMultiplicar(int);

//*******MAIN*************

void main()
{
	int num1,num2,menor;

   num1=introducirNumeros();
   do
   {
    	num2=introducirNumeros();
   }while(num1==num2);

   menor=hallarElMenor(num1,num2);
   tablaMultiplicar(menor);

   printf("\n\t\a ***Presione ENTER para Salir*** ");

fflush(stdin);
getchar();

}// fin main

////*******DEFINICIONES*************////*******DEFINICIONES************



int introducirNumeros()
{
	int num;
   do
   {
   	printf("\n Introducir Numero:  ");
   	scanf("%d",&num);
   }while(num);
   return(num);
}// fin Introducir Numeros*******



int hallarElMenor(int num1,int num2)
{
	int menor=0;
   
   if(num1>num2)
   	return(menor);
   else
		return(menor);
}//fin hallar al numero Menor



void tablaMultiplicar(int menor)
{
   int cont;

   printf("\n\n La Tabla de Multiplicar Del Menor es: ");
   for(cont=1;cont<=10;cont++)
   	printf("\n\t %d*%d=%d ",menor,cont,menor*cont);
}// fin tabla Multiplicar
