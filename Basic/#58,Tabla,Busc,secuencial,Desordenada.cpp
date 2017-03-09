
/* Busquedas en Tabla Desordenada forma secuencial */


#include <stdio.h>
#include <conio.h>
#define nElem 5

     
void main()
{
	int valor,i,Tabla[nElem];

   for(i=0;i<nElem;i++)
   {
   	printf("\n Introducir Numero: ");
   	scanf("%d",Tabla[i]);
   }//fin for

   clrscr();

   printf("\n Introducir Valor a Buscar: ");
   scanf("%d",&valor);

   clrscr();

   for(i=0;i<nElem && valor>Tabla[i];i++);

   if(i==nElem || Tabla[i])
   	printf("\n Valor No Encontrado!!");
   else
   	printf("\n Valor Encontrado!!");

 fflush(stdin);
 getchar();

}//fin busqueda secuencial en tabla ordenada


/*void main()
{
	int valor,i,Tabla[nElem];

   for(i=0;i<nElem;i++)
   	printf("\n Tabla[%d]--> %d",i,i+1);

   printf("\n Introducir Tabla[]: ");
   scanf("%d",Tabla[i]);

   printf("\n Introducir Valor a Buscar: ");
   scanf("%d",&valor);

   for(i=0;i<nElem && valor!=Tabla[i];i++);

   if(i==nElem)
   	printf("\n Valor No Encontrado!!");
   else
   	printf("\n Valor Encontrado!!");

 fflush(stdin);
 getchar();

}// fin funcion de busqueda secuencia en tabla desordenada.   */