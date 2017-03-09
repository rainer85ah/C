/****************************************************************************************************
Introducir de cada uno de los empleados de una empresa, los siguioentes datos:
-> Nombre, Sueldo (real), numero de hijos y categoria (char). Se pide;
-- Sueldo máximo de los empleados de categoria 1.
-- Media de hijos de empleados de categoria 2.
-- Sueldo medio de los empleados de la categoria 3 sin hijos.
-- Sueldo medio de los empleados del resto de categorias.
-- Nombre y numero de hijos del empleado con mayor sueldo de la empresa (no hay 2 con el mismo sueldo)
-- Numero de empleados de la empresa.
el proceso finaliza cuando a la pregunta desea continuar se reponde una n)
****************************************************************************************************/


#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
void main ()
{
	int hijos=0, contCat2=0,acumHijCat2=0, contEmCat3Sin=0, contEmRest=0, maxHijos=0,contEmp=0;
   char nombre[30], categoria, maxNom[30], continuar;
   float sueldo=0, maxSuCat1=0, acumSuCat3Sin=0, acumSuRest=0, maxSueldo=0;
   printf("\n ¿Desea empezar a contar explotados de la vida laboral? (N para fin): ");
   fflush(stdin);
   continuar=getchar();
   while(toupper(continuar)=='S')
   {
   	printf("\n Digame el nombre del currito: ");
      fflush(stdin);
      gets(nombre);
      printf("\n ¿Cuanta pasta se lleva %s?: ", nombre);
      scanf("%f",&sueldo);
      printf("\n ¿Cuantos bastardos tiene el tal %s?: ",nombre);
      scanf("%d",&hijos);
      printf("\n ¿A que categoria pertenece %s?: ",nombre);
      fflush(stdin);
      categoria=getchar();
      switch(categoria)
      {
      	case '1':
            if(sueldo>maxSuCat1)
            	maxSuCat1=sueldo;
         break;
         case '2':
         	contCat2++;
            acumHijCat2=acumHijCat2+hijos;
         break;
         case '3':
         	if(hijos==0)
            {
            	contEmCat3Sin++;
               acumSuCat3Sin=acumSuCat3Sin+sueldo;
            }//fin si
         break;
         default:
         	acumSuRest=acumSuRest+sueldo;
            contEmRest++;
         break;
      }//fin switch
      if (sueldo>maxSueldo)
      {
      	maxSueldo=sueldo;
         strcpy(nombre, maxNom);
         maxHijos=hijos;
      }//fin si
      contEmp++;
      clrscr();
      printf("\n ¿Desea continuar contando explotados de la vida laboral? (N para fin): ");
      fflush(stdin);
      continuar=getchar();
      clrscr();
   }//fin while
   printf("\n El sueldo maximo de la categoria 1 es: %.2f leuros", maxSuCat1);
   putchar('\n');
   if(contCat2!=0)
   	printf("\n La media de bastardos de la Categoria 2 es: %d hijos", acumHijCat2/contCat2);
   if(contEmCat3Sin!=0)
   putchar('\n');
   	printf("\n El sueldo medio de proletarios sin prole de categoria 2 es: %.2f leeeuros", acumSuCat3Sin/contEmCat3Sin);
   if(contEmRest!=0)
   	printf("\n El Sueldo medio del resto de curritos es: %.2f leuros", acumSuRest/contEmRest);
   putchar('\n');
   printf("\n El cabrito con mayor sueldo es %s que gana %.2f, y tiene %d bastardos", maxNom, maxSueldo, maxHijos);
   putchar('\n');
   printf("\n El numero de esbirros que tienes explotados es: %d ganyanes", contEmp);
   fflush(stdin);
   getchar();
}//fin main
