
/* Introducir de los alumnos de una clase el nombre, le edad y la altura en cm,
Visualizar la edad media y la altura media de los alumnos mayores o iguales a 18 anyos. Suponiendo que los
alumnos sean de diferentes alturas, halla la altura Maxima y nombre de los alumnos de 19 anyos.
 El proceso finaliza al introducir una 0 en luga de una edad. */


#include <stdio.h>
#include <conio.h>
#include <string.h>


void main()
{
	int edad,edadCont=0,edadAcum=0,altura,alturaMax=1,alturaCont=0,alturaAcum=0;
	char nombre[20],nombreMax[20];

   textcolor(11);
   textbackground(1);
   clrscr();

   gotoxy(20,3);
   cprintf("Edad del Alumno: ");
   scanf("%d",&edad);

   while(edad)
   {
      gotoxy(20,5);
   	cprintf("Altura del Alumno: ");
      scanf("%d",&altura);

      gotoxy(20,7);
      cprintf("Nombre del Alumno: ");
      fflush(stdin);
   	gets(nombre);

      clrscr();

   	if(edad>=18)
   	{
         edadCont++;
	      edadAcum+=edad;      			//edadAcum=edadAcum+edad;
     		alturaCont=alturaCont+1;    	//alturaCont+=1;
      	alturaAcum+=altura;

   		if(edad==19)
   			if(altura>alturaMax)
   			{
     				alturaMax=altura;
      			strcpy(nombreMax,nombre);
   			}//fin si
      }

   	gotoxy(20,3);
   	cprintf("Edad del Alumno: ");
   	scanf("%d",&edad);

   }//end while

		if(edadCont)
   	{
   		gotoxy(5,3);
			cprintf("La Edad Media de Los Mayores o Iguales de 18: %d/%d=%.2f",edadAcum,edadCont,(float)edadAcum/edadCont);
   	}

		if(alturaCont)
   	{
   		gotoxy(5,5);
			cprintf("La Altura Media es de: %d/%d=%.2f",alturaAcum,alturaCont,(float)alturaAcum/alturaCont);
   	}

   	if(alturaMax)
   	{
   		gotoxy(5,7);
			cprintf("El Alumno Mas Alto Mide: %d cm y su Nombre es: %s ",alturaMax,nombreMax);
   	}
   
   fflush(stdin);
	getchar();

}//fin main