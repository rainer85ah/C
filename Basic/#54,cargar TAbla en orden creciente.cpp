
// Define y Carga una Tabla de 20 elementos diferentes con la condicion de que sea en orden creciente


#include <stdio.h>
#define nElem 5


void main()
{
	int i=0,Tabla[nElem];

   	printf("\n Introducir Numero: ");
   	scanf("%d",&Tabla[i]);

   for(i=1;i<nElem;i++)
   {
   	do
      {
      	printf("\n Introducir Numero: ");
   		scanf("%d",&Tabla[i]);
      }while(Tabla[i]<=Tabla[i-1]);

   }//fin for

   for(i=0;i<nElem;i++)
    	printf("\t %d",Tabla[i]);

 fflush(stdin);
 getchar();
 
}//fin main