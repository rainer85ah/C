
/* En el main definimos una variable empleado, reclamamos una funcion para cargar los datos por referencia
,lo recibe un puntero, 2 visualizar datos , todo esto por referencia.

typedef struct
{
	char nombre[30];
   float sueldo;
   int anyoInico;
}Empleado;


*/




#include <stdio.h>
#include <conio.h>
#include <string.h>



typedef struct
{
	char nombre[30];
   float sueldo;
   int anyoIngreso;
}Empleado;


typedef struct
{
	char nombre[30];
   float sueldo;
}Datos;



int menu();
void cargar(Empleado *);
void visualizar(Empleado reg);
Datos comprobarAntiguedad(Empleado *);




void main()
{
	int opc;
   Empleado reg;
   Datos reg1;

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
         	cargar(&reg);
         break;

         case 2:
         	clrscr();
         	visualizar(reg);
         break;

         case 3:
         	clrscr();
            reg1=comprobarAntiguedad(&reg);
            gotoxy(25,3);
            cprintf("Los Datos del Empleado con Mas de 15 Anyos: ");
            gotoxy(25,5);
            cprintf("Nombre: %s",reg1.nombre);
            gotoxy(25,7);
            cprintf("Sueldo: %.2f",reg1.sueldo);
            getchar();
         break;

         case 4:
         	clrscr();
         	gotoxy(25,6);
            cprintf("Presione 2 Veces Enter Para Salir!!");
         break;

         default:
         	clrscr();
         	gotoxy(25,6);
            cprintf("Opcion Incorrecta, (1-4)!!");
         break;

      }// fin switch

      fflush(stdin);
      getchar();

   }while(opc!=3);

	fflush(stdin);
   getchar();

}//end main







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
   cprintf("2. Comprobar Antiguedad");
   gotoxy(20,15);
   cprintf("3. Salir");

   gotoxy(20,18);
   cprintf("Elegir Una Opcion: ");
   scanf("%d",&opc);  
   return(opc);

}// fin menu





void cargar(Empleado *reg)
{

	gotoxy(20,3);
	cprintf("Cargar Datos del Empleado: ");

   gotoxy(20,5);
	cprintf("Nombre: ");
   fflush(stdin);
   gets(reg->nombre);
   gotoxy(20,5);
	cprintf("Sueldo: ");
   scanf("%f",&reg->sueldo);
   gotoxy(20,5);
	cprintf("Anyo de Ingreso: ");
   scanf("%d",&reg->anyoIngreso);

   getchar();

}// end cargar





void visualizar(Empleado reg)
{

	gotoxy(20,3);
	cprintf("Datos del Empleado: ");

   gotoxy(20,5);
	cprintf("Nombre:%s",reg.nombre);
   gotoxy(20,5);
	cprintf("Sueldo:.2f",reg.sueldo);
   gotoxy(20,5);
	cprintf("Anyo de Ingreso:%d",reg.anyoIngreso);

   fflush(stdin);
   getchar();

}// end visualizar





Datos comprobarAntiguedad(Empleado *)
{
	Datos aux;
   Empleado reg;
   
   if(2010-reg.anyoIngreso >= 15)
   {
    	strcpy(aux.nombre,reg.nombre);
      aux.sueldo=reg.sueldo;
   }

   return(aux);

}// end comprobar anyo de antiguedad





























