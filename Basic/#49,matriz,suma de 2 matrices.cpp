
/* Definir y argar  por teclado 2 tablas enteras de 20 elementos, denominadas
tb_a, tb_b, y a partir de ellas crear una tabla tb_Suma, con las suma de a+b. */

#include <stdio.h>
#define nElem 5

void main()
{
	int TB_A[nElem],TB_B[nElem],TB_Suma[nElem],i;

   for(i=0;i<nElem;i++)
   	TB_A[i]=0;

   for(i=0;i<nElem;i++)
   	TB_B[i]=0;

   for(i=0;i<nElem;i++)
   	TB_Suma[i]=0;

   for(i=0;i<nElem;i++)
	{
   	printf("\n Introducir Numero Tabla A: ");
   	scanf("%d",&TB_A[i]);
    }//fin for

   for(i=0;i<nElem;i++)
   {
   	printf("\n Introducir Numero Tabla B: ");
   	scanf("%d",&TB_B[i]);
    }//fin for

   for(i=0;i<nElem;i++)
   {
   	TB_Suma[i]=TB_A[i]+TB_B[i];
      printf("\n\n \t %d ,",TB_Suma[i]);
    }//fin for

 fflush(stdin);
 getchar();

}//fin main