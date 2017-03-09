/*Introducir de cada empleado de una determinada empresa, el NOMBRE, la EDAD y el SUELDO y, visualizar:  (3.5 pto.)
Nombre y edad del empleado con sueldo  más alto. (Se supone que no hay dos empleados coincidentes exactamente en el sueldo).
Edad media de los empleados cuyo sueldo es inferior a 2500 euros.
Sueldo medio de la empresa.
Número de empleados de la empresa
La introducción de datos de empleados finaliza al teclear ‘N’ a la pregunta de si desea continuar*/

#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
void main ()
{
	int edad, maxEdadSu=0, contEm=0, contEm2500=0, acuEdEm2500=0;
   char nombre[30], maxNom[30], continuar;
   float sueldo, maxSuel=0, acuSuel=0;
   printf("\n ¿desea iniciar?(S/N): ");
   fflush(stdin);
   continuar=getchar();
   if(toupper(continuar)=='N')
   return;
   while(toupper(continuar)=='S')
   {
      clrscr();
   	printf("\n Introduzca el nombre del empleado, por favor: ");
      fflush(stdin);
      gets(nombre);
      printf("\n ¿Que edad tiene el empleado %s? :", nombre);
      fflush(stdin);
      scanf("%d", &edad);
      printf("\n ¿Que sueldo tiene el empleado %s? :", nombre);
      fflush(stdin);
      scanf("%f", &sueldo);
      if(sueldo>maxSuel)
      {
      	maxSuel=sueldo;
         maxEdadSu=edad;
         strcpy(maxNom,nombre);
      }//fin si
      if (sueldo<=2500)
      {
      	contEm2500=contEm2500++;
         acuEdEm2500=acuEdEm2500+edad;
      }//fin si
      contEm=contEm++;
      acuSuel=acuSuel+sueldo;
      printf("\n ¿desea continuar?(S/N): ");
      fflush(stdin);
      continuar=getchar();
   }//fin while
   printf("\n %s, es el empleado con sueldo mas alto (%.2f) y su edad es %d", maxNom, maxSuel, maxEdadSu);
   if (contEm2500!=0)
   	printf("\n La edad media de los empleados cuyo sueldo es inferior a 2500 euritos de mierda es: %d",acuEdEm2500/contEm2500);
	printf("\n El sueldo medio de la empresa es %.2f", acuSuel/contEm);
   printf("\n La empresa tiene %d empleados",contEm);
   fflush(stdin);
   getchar();
}
