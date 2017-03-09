/* Definir y cargar una tabla cuyos valores seran la posicion mas2 y visualizar dicha tabla */

#include <stdio.h>
#define nElem 5


void main()
{
	int TB[nElem],i;

   for(i=0;i<nElem;i++)
   	TB[i]=0;

   for(i=0;i<nElem;i++)
   	TB[i]=i+2;

   for(i=0;i<nElem;i++)
   	printf("\n %d",TB[i]);

 fflush(stdin);
 getchar();
 
}//fin main
