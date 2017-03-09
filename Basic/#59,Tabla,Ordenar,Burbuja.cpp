
/* Ordena una tabla pequena con el metodo de la burbuja */


#include <stdio.h>
#define nElem 20

void main()
{
	int i,k=0,aux,Tabla[nElem]={2,3,1,4,5,6,7,8,9,0,1,2,3,4,5,6,7,8,9,2};
   char cambio='s';

   k++;
   while(cambio=='s')
   {
   	cambio='n';
      for(i=0;i<(nElem-k);i++)
      	if(Tabla[i]>Tabla[i])
         {
         	aux=Tabla[i];
            Tabla[i]=Tabla[i++];
            Tabla[i++]=aux;
         	cambio='s';
          }//end if

   }//end while

	printf("\n ");
 fflush(stdin);
 getchar();

}//fin main