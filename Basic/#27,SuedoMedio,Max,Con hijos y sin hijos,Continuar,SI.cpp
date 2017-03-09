
/* Introducir de cada uno de los empleados de una empresa los siguientes datos:
Nombre, sueldo y numero de hijos.Visualizar  Sueldo Medio de los empleados sin hijos,
Sueldo Maximo y nombre entre los empleados con al menos 2 hijos, y nombre, sueldo
Minimo del empleado. El proceso finaliza cuando la pregunta .Deseas Continuar? sea no.  */

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	int hijos;
	float sueldo,contSueldo=0,acumSueldo=0,sueldoMax=0,sueldoMin=999999;
   char Continuar[3]="si",nombre[20],nombreMax[20],nombreMin[20];

	while(stricmp(Continuar,"si")==0)
   {
   	printf("\n Introducir Nombre: ");
      fflush(stdin);
      gets(nombre);

      printf("\n Introuducir Sueldo: ");
      scanf("%d",&sueldo);

      printf("\n Introuducir Numero de Hijos: ");
      scanf("%d",&hijos);

      clrscr();

      if(hijos==0)
      {
      	contSueldo++;
         acumSueldo+=sueldo;
      }// fin si
      if(hijos>=2)
      {
      	if(sueldoMax<sueldo)
         {
         	sueldoMax=sueldo;
            strcpy(nombreMax,nombre);
         }//fin si
      }//fin si

      if(sueldoMin>sueldo)
         {
         	sueldoMin=sueldo;
            strcpy(nombreMin,nombre);
         }// fin si


      printf("\n Deseas Continuar (si/no):  ");
      fflush(stdin);
      gets(Continuar);
      
	 }// fin while

    clrscr();
 if(contSueldo)
 {
   printf("\n El Sueldo Medio Del empleado sin Hijos es: %d",acumSueldo/contSueldo);
   printf("\n El Sueldo Maximo Del empleado con al Menos 2 hijos es: %d y se llama: %s",sueldoMax,nombreMax);
   printf("\n El Nombre del Empleado con Menor sueldo es: %s y gana: %d",nombreMin,sueldoMin);
 }// fin si
fflush(stdin);
getchar();

}// fin main
