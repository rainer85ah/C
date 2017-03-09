/* Introducir el nombre,edad y salario de los empleados de  una empresa
y visualizar el sueldo medio de los empleados entre 30 y 40 anyos, la edad media
los empleados que ganan mas de 3000 euros, nombre y edad del emplado con mayor
sueldo y el numero de empleados de la empresa suponiendo que nadie gane lo mismo,
el proceso finaliza cuando lleguen a 20 empleados en lugar de un nombre */


#include <stdio.h>
#include <string.h>
#include <conio.h>


void main()
{
	int edad,edadCont,edadAcum,edadMax;
   float sueldo,sueldoAcum,sueldoMax,sueldoCont;
   char nombre[20],nombreMax[20];

    edadAcum=edadMax=0;
    sueldoMax=sueldoCont=sueldoAcum=0;

    for(edadCont=0;edadCont>=20;edadCont++)
    {
    	 printf("\n\a Introducir Nombre:  ");
       scanf("%s",nombre[20]);
       
       printf("\n Introducir Edad: ");
       scanf("%d",&edad);

       printf("\n Introducir Sueldo: ");
       scanf("%d",&sueldo);

       if(edad>=30 && edad<=40)
       {
            sueldoCont++;
            sueldoAcum+=sueldo;
       }//fin si
       
       if(sueldo>=3000)
       {
        		edadCont++;
            edadAcum+=edad;
       }//fin si

       if(sueldo>sueldoMax)
       {
       		sueldoMax=sueldo;
            strcpy(nombreMax,nombre);
            edadMax=edad;
       }//fin si

    }//fin for

    if(edadCont)
    	printf("\n\t La media de la edad es igual: %d/%d=%d",edadAcum,edadCont,edadAcum/edadCont);
    clrscr();
    if(sueldoCont)
    	printf("\n\t El Sueldo Medio es igual: %d/%d=%d",sueldoAcum,sueldoCont,sueldoAcum/sueldoCont);
    clrscr();
    if(sueldoMax)
    {
    	printf("\n El Sueldo Maximo es de: %d",sueldoMax);
      printf("\n El Nombre del Empleado con mayor Sueldo : %s",nombreMax);
      printf("\n La Edad de este Empleado es: %d",edadMax);
    }// fin si

    printf("\n El Numero de Empleados son: %d",edadCont);

    fflush(stdin);
    getchar();
}// fin-main
