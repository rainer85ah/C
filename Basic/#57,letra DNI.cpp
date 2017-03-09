
//Calcular letra del DNI

#include <stdio.h>
#include <conio.h>

void main ()
{
	int dni,Resto;
   char Letras[24]={'T','R','W','A','G','M','Y','F','P','D','X','B','N','J','Z','S','Q','V','H','L','C','K','E'};

   printf("\n Introducir DNI: ");
   scanf("%d",&dni);

	Resto=dni%23;
   clrscr();
   printf("\n DNI: %d-%c",dni,Letras[Resto]);

   fflush(stdin);
   getchar();

}//fin-main

