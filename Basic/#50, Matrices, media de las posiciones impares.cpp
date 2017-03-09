
/*   Definir y Cargar una Tabla de 20 elementos enteros y visualizar la media
entre las posiciones impares. */

#include <stdio.h>
#define nElem 5

void main()
{
	int Tabla[nElem],i,acum=0;

   for(i=0;i<nElem;i++)
   	Tabla[i]=0;

   for(i=0;i<nElem;i++)
   {
   	printf("\n Introducir Numero: ");
      scanf("%d",&Tabla[i]);
   }//fin for

   for(i=0;i<nElem;i++)
   	printf("%d  .",Tabla[i]);

   for(i=1;i<nElem;i+2)
    	acum=acum+Tabla[i];

   for(i=0;i<nElem;i++)
   	printf("%d  .",Tabla[i]);

   printf("\n La Media de las posiciones impares es: %d ",acum/2);

 fflush(stdin);
 getchar();
 
}//fin main