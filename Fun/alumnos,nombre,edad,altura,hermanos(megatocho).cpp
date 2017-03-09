/*Introducir de cada alumno de una clase el NOMBRE, AÑO NACIMIENTO, ALTURA CM y NUMERO DE HERMANOS:
-Edad media de los alumnos sin hermanos
-Nombre y edad del alumno mas alto
-Nombre y edad del alumno menos alto
-Edad media de la clase
La introduccion de datos termina cuando la pregunta ¿DESEA CONTINUAR? se responde con N/n*/

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
void main ()
{
	int anNac, anAct, alt, edad, maxAlt=50, minAlt=300, hnos, acumEdSin=0, contAlSin=0, acuEd=0, contAlu=0, maxEd, minEd;
   char nombre[20], maxNom[20], minNom[20], continuar;
   printf("\n Digame en que anno estamos, por favor: ");
   scanf("%d",&anAct);
   printf("\n ¡¡Gracias!! \n");
   printf("\n ¿desea iniciar?(S/N): ");
   fflush(stdin);
   continuar=getchar();
   while(tolower(continuar)=='s') /*este comando esta puesto para que ,me reconozca todas las letras introducidas como minúsculas, asi solo hay que poner una condición en el while*/
   {
      clrscr();
   	printf("\n Introduzca el nombre del alumno, por favor: ");
      fflush(stdin);
      gets(nombre);
      printf("\n ¿En que anno nacio %s? :", nombre);
      fflush(stdin);
      scanf("%d", &anNac);
      edad=anAct-anNac;
      printf("\n ¿Cuanto mide %s (en cm, por favor)?: ",nombre);
      fflush(stdin);
      scanf("%d", &alt);
      printf("\n ¿cuantos hermanos tiene %s?: ",nombre);
      fflush(stdin);
      scanf("%d",&hnos);
      if(hnos==0)
      {
      	acumEdSin=acumEdSin+edad;
         contAlSin++;
      }//fin si
      if(alt>maxAlt)
      {
      	strcpy(maxNom,nombre);
         maxAlt=alt;
         maxEd=edad;
      }//fin si
      if(alt<minAlt)
      {
         strcpy(minNom,nombre);
         minAlt=alt;
         minEd=edad;
      }//fin si
      acuEd=acuEd+edad;
      contAlu++;
      printf("\n ¿desea usted continuar?(S/N): ");
      fflush(stdin);
      continuar=getchar();
   }//Fin while
   if(contAlSin!=0)
     	printf("\n La edad media de alumnos sin hermanos es: %d", acumEdSin/contAlSin);
   printf("\n El alumno mas alto es %s, de edad %d annos", maxNom, maxEd);
   printf("\n El alumno menos alto es %s, de edad %d annos", minNom, minEd);
   printf("\n La edad media de la clase es: %d ", acuEd/contAlu);
   fflush(stdin);
   getchar();
}// Fin main
