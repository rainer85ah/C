// busqueda secuencial desordenada

#include<stdio.h>
#include<conio.h>
#define nElem 10

/*
void main()
{
   int i,valor,Tabla[nElem];

   for(i=0;i<nElem;i++)
   {
   	printf("\n Introducir Numero Tabla[%d]: ",i+1);
      scanf("\n %d",&Tabla[i]);
   }//fin for

   printf("\n Introducir Valor a Buscar: ");
   scanf("\n %d",&valor);

   for(i=0;i<nElem && valor!=Tabla[i];i++);

   if(i==nElem)
   	printf("\n\a Numero No Encontrado!!!");
   else
   	printf("\n Numero %d Encontrado en la posicion %d .",valor,i+1);

	fflush(stdin);
	getchar();

}//fin BusSecDesordenada    */

//  **************************busqueda secuencial ordenada********************88


void main()
{
   int i,valor,Tabla[nElem];

   
   for(i=0;i<nElem;i++)
   {
   	printf("\n Introducir Numero Tabla[%d]: ",i+1);
      scanf("\n %d",&Tabla[i]);
   }//fin for

   printf("\n Introducir Valor a Buscar: ");
   scanf("\n %d",&valor);

   for(i=0;i<nElem && valor>Tabla[i];i++);

   if(i==nElem || Tabla[i]>valor)
   	printf("\n Numero No Encontrado!!!");
   else
   	printf("\n Numero Encontrado %d en la posicion %d .",valor,i+1);

	fflush(stdin);
	getchar();

}//fin BusSecOrdenada
