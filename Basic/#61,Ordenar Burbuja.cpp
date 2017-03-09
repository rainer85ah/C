// metodo de ordenar   burbuja


#include <conio.h>
#include <stdio.h>
#define nElem 10


void main()
{
	int i,aux,Tabla[nElem]={5,4,3,7,8,9,0,1,2,3};
   char cambio='s';

   while(cambio=='s')
   {
   	  cambio='n';
      for(i=0;i<nElem-1;i++)
      {
      	if(Tabla[i]>Tabla[i+1])
         {
         	aux=Tabla[i];
            Tabla[i]=Tabla[i+1];
            Tabla[i+1]=aux;
            cambio='s';

         }//fin if

      }//fin for

   }//fin while

   printf("\n Tabla Organizada");
   printf("\n");
   
   for(i=0;i<nElem;i++)
      printf("\nTabla[%d]=%d",i+1,Tabla[i]);

   fflush(stdin);
   getchar();
   
}//fin main
