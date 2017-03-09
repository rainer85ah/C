/*Introducir numero secreto en la variable secreto, borrar pantalla, imtroducir otro numero
en la variable numero y mientras que no coincidan, visualizar un mensaje diciendo si el
valor secreto es mayor o menos que el numero introducido. Seguir introduciendo numeros hasta que se averigue.*/
#include <stdio.h>
#include <conio.h>
void main()
{
	int secreto,numero;
   printf("\n Introduzca numero secreto: ");
   scanf("%d",&secreto);
   clrscr();
   printf("\n Introduzca numero: ");
   fflush(stdin);
   scanf("%d",&numero);
   while(secreto!=numero)
   {
   	if(secreto>numero)
      	printf("\n El numero secreto es mayor: ");
         else
         	printf("\n El numero secreto es menor: ");
      printf("\n Introduzca numero: ");
      fflush(stdin);
      scanf("%d",&numero);
   }//fin while
   printf("\n ACERTASTE!!!!");
   fflush(stdin);
   getchar();
}//fin main