/* definir y cargar una Tabla de 20 elementos enteros y visualizar el mayor */

#include <stdio.h>
#define nElem 5


void main()
{
	int Tabla[nElem],i,mayor=0;

   for(i=0;i<nElem;i++)
   	Tabla[i]=0;

   for(i=0;i<nElem;i++)
   {
   	printf("\n Introducir Numero: ");
      scanf("%d",&Tabla[i]);
   }//fin for

   for(i=0;i<nElem;i++)
   	printf("\n\t %d ,",Tabla[i]);

   for(i=0;i<nElem;i++)
   	if(Tabla[i]>mayor)
      	mayor=Tabla[i];

   printf("\n El Numero Mayor es : %d",mayor);

 fflush(stdin);
 getchar();
 
}//fin main

































