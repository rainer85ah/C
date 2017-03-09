/*
Crear La Estructura Curso, nombre, asig[3], arrays de curso 4, mediante una funcion se carga y mediante otra se visualiza.
*/


#include <stdio.h>
#include <conio.h>
#include <string.h>



//*****************************estructuras**************************


typedef struct
{
   char nombreCurso[10];
   char asig[3][10];
}TCurso;



//*****************************prototipos**************************

int menu();
void cargar(TCurso *);
void visualizar(TCurso *);


//*****************************main**************************

void main()
{
	int opc;
   TCurso reg[4];

   textcolor(11);
   textbackground(1);
   clrscr();

   do
   {
   	clrscr();
      opc=menu();

      switch(opc)
      {
      	case 1:
         	clrscr();
         	cargar(reg);
         break;

         case 2:
         	clrscr();
         	visualizar(reg);
         break;

         case 3:
         	clrscr();
         	gotoxy(25,6);
            cprintf("Presione 2 Veces Enter Para Salir!!");
         break;

         default:
         	clrscr();
         	gotoxy(25,6);
            cprintf("Opcion Incorrecta, (1-3)!!");
         break;

      }// fin switch

      fflush(stdin);
      getchar();

   }while(opc!=3);

	fflush(stdin);
   getchar();

}//end main


//*****************************definiciones*************************

int menu()
{
	int opc;

   gotoxy(20,6);
   cprintf("Menu de Opciones: ");

   gotoxy(20,9);
   cprintf("1. Cargar");
   gotoxy(20,11);
   cprintf("2. Visualizar");
   gotoxy(20,13);
   cprintf("3. Salir");

   gotoxy(20,16);
   cprintf("Elegir Una Opcion: ");
   scanf("%d",&opc);

   return(opc);

}// fin menu




void cargar(TCurso tb[])
{
	int i,j;

   for(i=0;i<4;i++)
   {                                                        
      clrscr();
      gotoxy(20,3);
   	cprintf("Cargar Datos del Curso %d \n",i+1);

      gotoxy(20,6);
      clreol();
      cprintf("Nombre del Curso: ");
      fflush(stdin);
      gets(tb[i].nombreCurso);

      for(j=0;j<3;j++)
   	{
      	gotoxy(20,8);
         clreol();
      	cprintf("Nombre Asignatura %d: ",j+1);
         fflush(stdin);
      	gets(tb[i].asig[j]);

      }//end for
   }//end for
}//end media alta



void visualizar(TCurso tb[])
{
   int i,j;

	for(i=0;i<4;i++)
   {
   	clrscr();
      gotoxy(20,3);
   	cprintf("Datos del Curso %d \n",i+1);
      gotoxy(20,6);
      cprintf("Nombre: %s",tb[i].nombreCurso);
      for(j=0;j<3;j++)
   	{
      	gotoxy(20,8);
         clreol();
      	cprintf("Materias: %s",tb[i].asig[j]);
         fflush(stdin);
      	getchar();
      }

      clrscr();
      gotoxy(25,6);
      cprintf("Presione 2 Veces Enter Para Salir!!");
      getchar();
      
	}//end for         
}// end visualizar




























