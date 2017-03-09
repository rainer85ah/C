/*Introducir de cada alumno de una clase: el nombre, la nota (real), edad y altura (cm) y se desea:
-visualizar Nombre y edad del alumno más alto.
-Nota media de la clase, con dos decimales.
-altura media, con dos decimales, de los mayores de edad.
-numero de alumnos, y de ellos cuantoa aprobados.

el proceso finaliza cuando en lugar de un nombre se mete un '*' */

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
void main ()
{
	int edad, altura, maxEdad=0,maxAlt=0, contAlu=0, acumAlt18=0, contAlu18=0, cont5=0;
   char nombre[30], maxNom[30];
   float nota, acuNota=0;
   printf("\n Introduzca nombre del alumno ('*' para finalizar): ");
   fflush (stdin);
   gets(nombre);
   while (strcmp(nombre, "*")!=0)
   {
   	printf("\n Dime la nota de %s: ",nombre);
      scanf("%f",&nota);
      printf("\n Que edad tiene el tal %s: ",nombre);
      scanf("%d",&edad);
      printf("\n Dame la altura (en cm) de %s: ", nombre);
      scanf("%d",&altura);
      if(altura>maxAlt)
      {
      	maxAlt=altura;
         strcpy(maxNom,nombre);
         maxEdad=edad;
      }//fin si
      if (edad>=18)
      {
      	contAlu18++;
         acumAlt18=acumAlt18+altura;
      }//fin si
      if(nota>=5)
        cont5++;
      contAlu++;
      acuNota=acuNota+nota;
      printf("\n Pulse intro para continuar...");
      fflush(stdin);
      getch();
      clrscr();
      printf("\n Introduzca nombre del alumno ('*' para finalizar): ");
      fflush (stdin);
      gets(nombre);
   }
   printf("\n El larguirucho de clase es %s y su edad es %d",maxNom, maxEdad);
   printf("\n La nota media de clase es %.2f",acuNota/contAlu);
   if(contAlu18>0)
   	printf("\n La altura media de los mayores de edad es %.2f",(float)acumAlt18/contAlu18);
   printf("\n Tenemos %d borregos en clase, y se han salvado %d",contAlu, cont5);
   fflush(stdin);
   getchar();

}
