#include <stdio.h>
#define nElem 9

void cargar(int tb[][nElem]);
void visualizar(int tb[][nElem]);
void main()
{
	int tb[nElem][nElem];
   cargar(tb);
   visualizar(tb);
}

//Funciones
void cargar(int tb[][nElem])
{
	int f,c;
   for(f=0;f<nElem;f++)
   {
   	for(c=0;c<nElem;c++)
      {
	   	tb[f][c]=f+1;
   	}
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



