
/*En una cadena de como maximo 100 caracteres, con un nombre y 2 apellidos, y dividir
esta cadena en 3 cadenas llamadas: nombre, apellido1, apellido2.*/


#include <stdio.h>
#include <string.h>

void main()
{
	int i,j;
   char cadena[100],nombre[30],apell1[30],apell2[30];

   printf("\n	Introducir Nombre y Apellidos: ");
   fflush(stdin);
   gets(cadena);

   for(i=0,j=0;cadena[i]!=' ';j++,i++)
   	nombre[j]=cadena[i];
   nombre[j]='\0';

   for(j=0,++i;cadena[i]!=' ';j++,i++)
   	apell1[j]=cadena[i];
   apell1[j]='\0';

   for(j=0,++i;cadena[i]!='\0';j++,i++)
		apell2[j]=cadena[i];
   apell2[j]='\0';
   
   printf("\n Las 3 cadenas son: ");
   printf("\n El Nombre es: %s",nombre);
   printf("\n El Primer Apellido es: %s", apell1);
   printf("\n El Segundo Apellido es: %s",apell2);

   fflush(stdin);
   getchar();
}// fin main

