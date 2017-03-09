//	Visualizar una tabla de 9x9 con forma capicua


#include <stdio.h>
#define nElem 9

void cargar(int tb[][nElem]);
void visualizar(int tb[][nElem]);
void main()
{
	int tb[nElem][nElem];
   cargar(tb);
   printf("\n\t***Tabla***\n");
   visualizar(tb);
}

//Funciones
 void cargar(int tb[][nElem])
 {
	int f,c,k;
   for(f=0;f<nElem;f++)
   {
   	for(c=0;c<=nElem/2;c++)
      {
	   	tb[f][c]=c+1;
   	}//fin
   	for(k=1,c=nElem-k;c>=nElem/2;k++,c=nElem-k)
      {
      	tb[f][c]=k;
      }//fin
   }
}//fin



void visualizar (int tb[][nElem])
{
	int c,f;
   for(f=0;f<nElem;f++)
   {
   	for(c=0;c<nElem;c++)
      {

      	printf(" %d ",tb[f][c]);
   	}//fin for
      putchar('\n');
   }//fin for
   	fflush(stdin);
      getchar();
}//fin visualizar


