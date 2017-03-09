/*	Introducir la altura, edad y nombre de los alumnos de una clase. Visualizar la media la
 altura de los alumnos de 18 en adelante. Visualizar la altura Mayor y su nombre de los alumnos mayores
a 19 anyos, el proceso finaliza cuando la edad introducida sea cero. */



#include <stdio.h>
#include <conio.h>
#include <string.h>


void main()
{
	int edad,edadCont=0,edadAcum=0,alt,altMax=0,altCont=0,altAcum=0;
	char nombre[20],nombreMax[20];

     printf("\n Introducir Edad: ");
     scanf("%d",&edad);

   while(edad)
   {

     printf("\n Introducir Altura: ");
     scanf("%d",&alt);

     printf("\n Introducir Nombre: ");
     scanf("%s",nombre);
     clrscr();
     edadCont++;
     edadAcum+=edad;

     if(edad>=18)
     {
     		altCont++;
     		altAcum+=alt;
     }//fin si
      if(edad==19)
     		if(alt>altMax)
         {
         	altMax=alt;
            strcpy(nombreMax,nombre);
          }//fin si

     printf("\n Introducir Edad: ");
     scanf("%d",&edad);
   }//fin while

   clrscr();
   if(edadCont)
   	printf("\n La media de la edad es: %d/%d=%d",edadAcum,edadCont,edadAcum/edadCont);
	if(altCont)
      printf("\n La media de la altura es: %d/%d=%d",altAcum,altCont,altAcum/altCont);
   if(altMax>0)
   	printf("\n La Altura Maxima y Nombre son: %d,%s",altMax,nombreMax);
   else
      printf("\n Record Guines, el Mas bajito del Mundo,LOL");
      
	fflush(stdin);
	getchar();
}//fin main
