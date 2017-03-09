
/* Introducir 2 valores enteros en la variables A y B, y dejar en A el
 valor mayor y en B el menor */

#include <stdio.h>
#include <conio.h>

void main()
{
	int A,B,aux;

   printf("\n Introducir Valor de A: ");
  	scanf("%d",&A);

  	printf("\n Introducir Valor de B: ");
  	scanf("%d",&B);

   clrscr();
   if(B>A)
   {
   	aux=A;
      A=B;
      B=aux;
    }// fin if

    printf("\n El valor de A es: %d y de B es: %d",A,B);

fflush(stdin);
getchar();

}//fin main