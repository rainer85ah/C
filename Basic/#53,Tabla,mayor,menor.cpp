
/* Define y Carga una Tabla de 20 elementos diferentes y visualiza el valor mayor
 y en que posicion esta? AL igual que con el valor menor. */

#include <stdio.h>
#include <conio.h>
#define nElem 5


void main()
{
	int menor=999999,mayor=-1,Tabla[nElem],i;

   for(i=0;i<nElem;i++)
   	Tabla[i]=0;

    for(i=0;i<nElem;i++)
    {
    	printf("\n Introducir Numero: ");
      scanf("%d",&Tabla[i]);
    }//fin for

    clrscr();

    for(i=0;i<nElem;i++)
    	printf("\t %d",Tabla[i]);

    for(i=0;i<nElem;i++)
    {
    	if(Tabla[i]<menor)
      	menor=Tabla[i];
      if(Tabla[i]>mayor)
      	mayor=Tabla[i];
    }//fin for

    printf("\n El numero Mayor es : %d ",mayor);
    printf("\n El numero Menor es : %d ",menor);

 fflush(stdin);
 getchar();
 
}// fin main
