/*	 TABLAS, VECTORES O ARRAYS.    recorrer una tabla */
/* Definir, cargar y visualizar una tabla de enteros denominada TablaPremio de 10
    elementos y la suma de todos los numeros */



#include <stdio.h>
#define nElem 5

void main()
{
	int i,TablaPremio[nElem],acum=0;

   for(i=0;i<nElem;i++)
   	TablaPremio[i]=0;

   for(i=0;i<nElem;i++)
   {
   	printf("\n\t Introducir Numero: ");
      scanf("%d",&TablaPremio[i]);
   }//fin for

   for(i=0;i<nElem;i++)
   	printf("%d  .",TablaPremio[i]);

   for(i=0;i<nElem;i++)
   {
      acum+=TablaPremio[i];
   }// fin for

  	printf("\n La suma de todos los numeros de la tabla es: %d ",acum);

   fflush(stdin);
   getchar();

}//fin main

