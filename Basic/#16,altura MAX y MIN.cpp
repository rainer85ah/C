/* Introducir la altura de una clase de 20 alumnos de y visualizar la
 altura mayor y la menor. */


#include <stdio.h>

void main()
{
	int alt,altMax=0,altMin=999,contAlum;

   for(contAlum=0;contAlum<5;contAlum++)
   {
   	printf("\n Introducir Altura Del Alumno: ");
   	scanf("%d",&alt);

   	if(alt>altMax)
      	altMax=alt;

      if(alt<altMin)
      	altMin=alt;
   }//fin for

   printf("\n\t La Altura Menor es: %d",altMin);
   printf("\n\t La Altura Maxima es: %d",altMax);

 fflush(stdin);
 getchar();

}//fin main