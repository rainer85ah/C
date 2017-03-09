/*13. Introducir de cada uno de los alumnos de una clase: nombre, edad, nota media obtenida en la última evaluación. Se pide calcular y visualizar:
-Edad media de los alumnos con nota media aprobada.
-Nombre y nota media del alumno con nota media más alta (se supone que dos alumnos no tienen exactamente la misma nota.
-Nota media de los alumnos mayores de edad.
El proceso de introducción de datos finaliza al introducir * en lugar de un nombre.*/

#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
void main ()
{
	int edad,contApro=0,acuEdAp=0,contAl18=0;
   char nom[25], maxNom[25];
   float nota, maxNota=0,acumNota18=0;
   printf("\n Introduzca Nombre del alumno (introduzca '*' para finalizar): ");
   gets(nom);
   while(strcmp(nom,"*")!=0)
   {
      printf("\n Introduzca la edad de %s: ",nom);
      scanf("%d",&edad);
      printf("\n Introduza nota media de %s: ",nom);
      scanf("%f",&nota);
      if (nota>=5)
      {
      	contApro++;
         acuEdAp=acuEdAp+edad;
      }//fin si
      if(nota>maxNota)
      {
      	maxNota=nota;
         strcpy(maxNom,nom);
      }//fin si
      if(edad>=18)
      {
      	contAl18++;
         acumNota18=acumNota18+nota;
      }//fin si
      clrscr();
      printf("\n Introduzca Nombre del alumno (introduzca '*' parafinalizar): ");
      fflush(stdin);
      gets(nom);
   }//fin while
   if (contApro!=0)
   	printf("\n La edad media de los alumnos aprobados es: %d",acuEdAp/contApro);
   if(contAl18!=0)
   	printf("\n La nota media de los alumnos mayores de edad es: %.3f",acumNota18/contAl18);
   printf("\n El alumno con mayor nota es %s, y su nota media es %.3f", maxNom, maxNota);
   fflush(stdin);
   getchar();
}//fin main

