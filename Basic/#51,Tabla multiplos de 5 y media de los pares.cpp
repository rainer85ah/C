/* Definir y Cargar una tabla de 20 elementos enteros y visualizar cuantos de ellos
son multiplos de 5 y la media de los elementos en las posiciones pares. */


#include <stdio.h>
#define nElem 5


void main()
{
	int Tabla[nElem],i,MediaPares=0,contMult5=0;

   for(i=0;i<nElem;i++)
   	Tabla[i]=0;

   for(i=0;i<nElem;i++)
   {
   	printf("\n\t Introducir Numero: ");
      scanf("%d",&Tabla[i]);
   }//fin for

   for(i=0;i<nElem;i++)
   	printf("%d  .",TablaPremio[i]);

   for(i=0;i<nElem;i++)
   {
   	if(Tabla[i]%5==0)
      	contMult5++;
   }//fin for

   for(i=0;i<nElem;i+2)
   	MediaPares+=Tabla[i];

   printf("\n Los numeros pares son: %d", contMult5);
   printf("\n La Media de los situados en posiciones pares: %d",(MediaPares/2));

 fflush(stdin);
 getchar();
}//fin main
