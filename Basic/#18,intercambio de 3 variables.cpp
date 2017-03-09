
/* Introducir 3 valores enteros en la variables A,B y C, y dejar en A el
 valor menor, en B el mediano y en C el mayor */

#include <stdio.h>
#include <conio.h>

void main()
{
	int A,B,C,aux;

   printf("\n Introducir Valor de A: ");
  	scanf("%d",&A);
   clrscr();
   do
   {
  		printf("\n Introducir Valor de B: ");
  		scanf("%d",&B);
   }while(B==A);
   clrscr();
   do
   {
   	printf("\n Introducir Valor de C: ");
  		scanf("%d",&C);
   }while(C==A || C==B);

   clrscr();
   if(B<A)
   {
   	aux=A;
      A=B;
      B=aux;
    }// fin if
    if(C<A)
    {
    	aux=A;
      A=C;
      C=aux;
    }//fin for
    if(B>C)
    {
    	aux=B;
      B=C;
      C=aux;
    }//fin for

    printf("\n El Valor Mayor esta en C: %d, El Mediano esta en B: %d, y en A esta el Menor: %d",C,B,A);

fflush(stdin);
getchar();

}//fin main